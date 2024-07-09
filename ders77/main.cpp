#include <iostream>
#include <string>

using namespace std;

class araclar
{
private:
    int yasakli_sayi=41;//mirasta da ulasamiyoruz
protected:
    int al_abi=34;//buna mirasta ulasabiliyoruz
public:
    string marka="Mercedes";
    void mesaj()
    {
        cout<<"Benim arabam ";
    }
};

//miras alimi islemi bu sekil yapiliyor
//ortak bilgilere daha kolay erismek icin kullaniriz

class araba:public araclar//inheritance (kalitim)
{
public:
    string model="CLA500";
    void mesaj2()
    {
        cout<<al_abi<<endl;
    }

};

//Multilevel inheritance (coklu miras) (cok duzeyli kalitim)

//coklu class etkilesimlerinde istenen bilgilerin erisimine ya da istenmeyen bilgilere erisilmemesindeki kontrolu sagliyor

class baba
{
public:
    void yaz()
    {
        cout<<"Bu inanilmaz aga"<<endl;
    }
};


class ogul:public baba
{
    //hicbirsey yazmassak bunlarý private kabul edecek dolayisiyla erisemeyecegiz

protected:
    int sayi=74;
};

class torun:public ogul
{
private:

    string ad="ALTINTOPAC";
public:
    int deger_al()
    {
        return sayi*3;
    }
};

class kalitim1
{
public:
    int a=24;
    void mesaj()
    {
        cout<<"Mirasimi alabilirsin"<<endl;
    }
};


class kalitim2
{
public:
    int b=825;
    void mesaj2()
    {
        cout<<"Mirasimi al evlat"<<endl;
    }
};

class cocuk:public kalitim1,public kalitim2//multiple inheritance
{
//birden fazla kalitim bu sekilde yapiliyor
};

int main()
{
    araba benim_arac;

    benim_arac.mesaj2();

    //benim_arac.al_abi;//burada ulasamayiz

    cout<<benim_arac.marka<<endl;
    cout<<benim_arac.model<<endl<<endl;

    torun ben;

    ben.yaz();
    //cout<<ben.ad<<endl;//hata verir protected cunku

    cout<<ben.deger_al()<<endl<<endl;//get metodu ile degeri aldik

    cocuk ustad;

    cout<<ustad.a<<endl;

    ustad.mesaj2();




    return 0;
}
