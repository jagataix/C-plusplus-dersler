#include <iostream>
#include <string>


using namespace std;

class isci
{
public:
    int maas;
    isci(int maas)
    {
        this->maas=maas;
    }
};

class isci2
{
private:
    int maas;
public:

    void maas_al(int a)
    {
        maas=a;
    }
    int maas_yaz()const//constant method
    {
        //maas=45778;//deger degistiremiyoruz hata verir
        return maas;
    }
};

class hayvan
{
public:
    virtual void ses()=0;//virtual method
    //miras alan class'lardaki methodlarin calismasina izin veriyoruz

};



class kopek:public hayvan
{
public:
    void ses()
    {
        cout<<"Kopekler havvlar"<<endl;
    }
};

class kedi:public hayvan
{
public:
    void ses()
    {
        cout<<"Kediler miyavlar"<<endl;
    }
};

class inek:public hayvan
{
public:
    void ses()
    {
        cout<<"Inekler mooooler"<<endl;
    }
};

class koyun:public hayvan
{
public:
    void ses()
    {
        cout<<"Koyunlar meeeler"<<endl;
    }
};

void hayvan_sesi(hayvan* x)
{
    x->ses();
}
int main()
{
    const isci kisi1(24093);//constant object
    //ayni constant variable'lar gibi degerler bu nesne icin degistirilemez

    //kisi1.maas=35647;//burasi hata verir
    cout<<kisi1.maas<<endl<<endl;

    isci2 kisi2;

    kisi2.maas_al(35253);
    cout<<kisi2.maas_yaz()<<endl<<endl<<endl;

    kopek kp;
    kedi kd;
    inek in;
    koyun ky;

    hayvan_sesi(&kp);
    hayvan_sesi(&kd);
    hayvan_sesi(&in);
    hayvan_sesi(&ky);




    return 0;
}
