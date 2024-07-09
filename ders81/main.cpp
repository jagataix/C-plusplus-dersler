#include <iostream>
#include <string>

using namespace std;

class hayvan//base class
{
public:
    void ses()
    {
        cout<<"Hayvan ses cikarabilir"<<endl;
    }
};

class kedi:public hayvan//derived class
{
public:
    void ses()
    {
        cout<<"Kedi ses cikarabilir (miyav miyav)"<<endl;
    }
};

class kopek:public hayvan//derived class
{
public:
    void ses()//polymorphism
    {
        //overloading yaptigimizda base class'in metodunu degil kendi metodunu kullanir
        cout<<"Kopek ses cikarabilir (hav hav)"<<endl;
    }
};

class adam
{
private:
    string ad;
    int para;
public:
    void parayi_al(int para)//private attribute'u ile bu variable'in adi ayni
    {
        //this anahtar bir komuttur
        this->para=para;//bunu yaparak hangisini hangisine atacagini anlamasini sagliyoruz
    }
     void adi_al(string ad)
    {
        this->ad=ad;
    }
    int parayi_yaz()
    {
        return para;
    }
    string adi_yaz()
    {
        return ad;
    }
};

class adam2
{
private:
    string ad;
    int para;
public:
    adam2(string ad,int para)//constructer icin de yine bu sekilde kafa karisikligini giderebiliriz
    {
        this->ad=ad;
        this->para=para;
    }
    void parayi_al(int para)//private attribute'u ile bu variable'in adi ayni
    {
        //this anahtar bir komuttur
        this->para=para;//bunu yaparak hangisini hangisine atacagini anlamasini sagliyoruz
    }
     void adi_al(string ad)
    {
        this->ad=ad;
    }
    int parayi_yaz()
    {
        return para;
    }
    string adi_yaz()
    {
        return ad;
    }
};


int main()
{
    kedi ke1;
    kopek ko1;
    hayvan h1;

    ke1.ses();
    ko1.ses();
    h1.ses();

    adam kisi;

    kisi.adi_al("Cagatay ALTINTOPAC");
    kisi.parayi_al(477000);

    cout<<"ADI    : "<<kisi.adi_yaz()<<endl;
    cout<<"PARASI : "<<kisi.parayi_yaz()<<endl<<endl;

    adam2 kisi2("Onur GOK",50000);

    cout<<"ADI    : "<<kisi2.adi_yaz()<<endl;
    cout<<"PARASI : "<<kisi2.parayi_yaz()<<endl;




    return 0;
}
