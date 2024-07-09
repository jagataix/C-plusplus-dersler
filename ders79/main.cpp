#include <iostream>
#include <string>


using namespace std;

class arac
{
public:
    double hiz;
    int tekerlek;

    void hareket()
    {
        cout<<"Bu arac hareket ediyor"<<endl;
    }
    void dur()
    {
        cout<<"Bu arac duruyor"<<endl<<endl;
    }
};

class araba:public arac
{
    public:
    int kapi=4;
};

class bisiklet:public arac
{
    public:
    int pedal=2;
};

class otobus:public arac
{
    public:
    int koltuk=40;
};



class hayvan
{
public:
    string tur;
    void yer()
    {
        cout<<"Bu hayvan yemek yiyor"<<endl;
    }
    void uyu()
    {
        cout<<"Bu hayvan uyuyor"<<endl;
    }
};

class tavsan:public hayvan
{
public:
    void kos()
    {
        cout<<"Bu hayvan kosuyor"<<endl<<endl;
    }

};

class balik:public hayvan
{
public:
    void yuz()
    {
        cout<<"Bu hayvan yuzuyor"<<endl<<endl;
    }

};

class kartal:public hayvan
{
public:
    void uc()
    {
        cout<<"Bu hayvan ucuyor"<<endl<<endl;
    }

};


int main()
{
    otobus b1;

    b1.hiz=95;
    b1.tekerlek=6;
    b1.hareket();
    cout<<"Otobusun hizi : "<<b1.hiz<<endl;
    cout<<"Otobusun tekerlek sayisi : "<<b1.tekerlek<<endl;
    cout<<"Otobusun koltuk sayisi : "<<b1.koltuk<<endl;
    b1.dur();

    araba a1;

    a1.hiz=120;
    a1.tekerlek=4;
    a1.hareket();
    cout<<"Arabanin hizi : "<<a1.hiz<<endl;
    cout<<"Arabanin tekerlek sayisi : "<<a1.tekerlek<<endl;
    cout<<"Arabanin kapi sayisi : "<<a1.kapi<<endl;
    a1.dur();

    bisiklet bi1;

    bi1.hiz=30;
    bi1.tekerlek=2;
    bi1.hareket();
    cout<<"Bisikletin hizi : "<<bi1.hiz<<endl;
    cout<<"Bisikletin tekerlek sayisi : "<<bi1.tekerlek<<endl;
    cout<<"Bisikletin pedal sayisi : "<<bi1.pedal<<endl;
    a1.dur();


    cout<<endl<<endl;

    kartal k1;

    k1.tur="Kartal";

    cout<<"Bu bir "<<k1.tur<<endl;
    k1.yer();
    k1.uyu();
    k1.uc();

    tavsan t1;
    t1.tur="Tavsan";
    cout<<"Bu bir "<<t1.tur<<endl;
    t1.yer();
    t1.uyu();
    t1.kos();

    balik ba1;
    ba1.tur="Balik";
    cout<<"Bu bir "<<ba1.tur<<endl;
    ba1.yer();
    ba1.uyu();
    ba1.yuz();

    cout<<endl<<endl;

    return 0;
}
