#include <iostream>
#include <string>


using namespace std;

enum gunler//enumaration
{
    pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar
    //dizi gibi algilayip sirayla 0 1 2... degerlerini atayacak
    //kelimelere sayisal anlam kazandiriyoruz
};

enum class gunler2//bu sekilde de tanimlayabiliriz
{
    pazartesi=2,sali,carsamba,persembe,cuma,cumartesi,pazar
    //sirayla 2 3 4... degerlerini atayacak
};

enum yakitlar
{
    gaz,dizel,lpg,hibrit,elektrik
};

enum cinsiyet//bir dizi seklinde de kullanabiliriz
{
    kadin,erkek
}kisi[30];

struct araba
{
    string renk;
    int fiyat;
    yakitlar p;//struct icine enum cagirabiliyoruz
};

class nesne
{
public:
    enum bisiler//class icinde enum kullanabiliyoruz
    {
        A,B,C,D,E,F
    };
};

int main()
{



    gunler x;


    x=sali;//aslinda sayi atamis olduk

    gunler y;

    int carsamba;

    y=gunler::carsamba;//karisikligi gidermek icin bunu kullandik

    switch(x)
    {
        case pazartesi:cout<<"Pazartesi"<<endl;break;
        case sali:cout<<"Sali"<<endl;break;
        case gunler::carsamba:cout<<"Carsamba"<<endl;break;
        case persembe:cout<<"Persembe"<<endl;break;
        case cuma:cout<<"Cuma"<<endl;break;
        case cumartesi:cout<<"Cumartesi"<<endl;break;
        case pazar:cout<<"Pazar"<<endl;break;
    }

    cout<<(int)gunler::cuma<<endl;//4 degeri

    cout<<(int)gunler2::cumartesi<<endl;//7 degeri

    yakitlar z;

    z=lpg;

    if(z==yakitlar::gaz)
        cout<<"Gaz"<<endl;
    else
        cout<<"Dizel"<<endl<<endl<<endl;

    for(short int i=yakitlar::gaz;i<=yakitlar::elektrik;i++)//for icinde bu sekilde kullanabiliriz
          cout<<i+1<<" kez numaralandirildi"<<endl;


    cout<<endl<<endl;
    araba v;

    v.p=gaz;

    cout<<v.p<<endl;//0 degeri



    return 0;
}
