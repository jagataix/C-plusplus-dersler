#include <iostream>
#include <string>


using namespace std;

class sekil
{
protected:
    double alan,cevre;
public:
    virtual void yazdir()=0;
    virtual void alan_hesapla()=0;
    virtual void cevre_hesapla()=0;
    double alan_al()const
    {
        return alan;
    }
    double cevre_al()const
    {
        return cevre;
    }

};

class dikdortgen:public sekil
{
    double genislik,yukseklik;
public:
    void yazdir()
    {
        cout<<"Bir dikdortgen var"<<endl;
    }
    dikdortgen(double genislik,double yukseklik)
    {
        this->genislik=genislik;
        this->yukseklik=yukseklik;
    }
    void alan_hesapla()
    {
        alan=yukseklik*genislik;
    }
    void cevre_hesapla()
    {
        cevre=2*(yukseklik+genislik);
    }
};

class ucgen:public sekil
{
    double taban,yukseklik,kenar1,kenar2;
public:
    void yazdir()
    {
        cout<<"Bir ucgen var"<<endl;
    }
    ucgen(double taban,double yukseklik,double kenar1,double kenar2)
    {
        this->taban=taban;
        this->yukseklik=yukseklik;
        this->kenar1=kenar1;
        this->kenar2=kenar2;
    }
    void alan_hesapla()
    {
        alan=yukseklik*taban/2;
    }
    void cevre_hesapla()
    {
        cevre=taban+kenar1+kenar2;
    }
};

class daire:public sekil
{
    double yaricap;
public:
    void yazdir()
    {
        cout<<"Bir daire var"<<endl;
    }
    daire(double yaricap)
    {
        this->yaricap=yaricap;

    }
    void alan_hesapla()
    {
        alan=yaricap*yaricap*3.14;
    }
    void cevre_hesapla()
    {
        cevre=2*yaricap*3.14;
    }
};


int main()
{
    sekil* dizi[3];


    dizi[0]=new dikdortgen(8,12);
    dizi[1]=new ucgen(3,14,7,23);
    dizi[2]=new daire(6);

    for(short int i=0;i<3;i++)
    {
        dizi[i]->yazdir();
        dizi[i]->alan_hesapla();
        dizi[i]->cevre_hesapla();
        cout<<"ALAN  : "<<dizi[i]->alan_al()<<endl;
        cout<<"CEVRE : "<<dizi[i]->cevre_al()<<endl<<endl;
    }


    return 0;
}
