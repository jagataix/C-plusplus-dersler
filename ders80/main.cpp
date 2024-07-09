#include <iostream>
#include <string>

using namespace std;

class bilgileri_yazdir
{
public:
    void yazdir(int deger)//overloading (bir degisken adini birden fazla kez kullanabilme)
    {
        cout<<"Yazdirilan deger(int)    : "<<deger<<endl;
    }
    void yazdir(double deger)
    {
        //float overloading'i desteklemiyor
        cout<<"Yazdirilan deger(double) : "<<deger<<endl;
    }
    void yazdir(string deger)
    {
        cout<<"Yazdirilan deger(string) : "<<deger<<endl;
    }
};

class isci
{
private:
    string ad;
    int maas;
    double kod;
public:
    isci()
    {
        ad="Cagatay ALTINTOPAC";
        maas=35000;
        kod=2.74;
    }
    isci(int x)
    {
        ad="Mert GUNOK";
        maas=x;
        kod=6.83;
    }
    isci(int x,double y)
    {
        ad="Merih YILDIRIM";
        maas=x;
        kod=y;
    }
    isci(int x,double y,string z)//constructorlarda da overloading yapabiliyoruz
    {
        ad=z;
        maas=x;
        kod=y;
    }
    void yazdir()
    {
        cout<<"Ad   : "<<ad<<endl;
        cout<<"Maas : "<<maas<<endl;
        cout<<"Kod  : "<<kod<<endl;
        cout<<"---------------"<<endl;
    }
};

int main()
{
    bilgileri_yazdir a;

    a.yazdir(6);
    a.yazdir(472.39);
    a.yazdir("Cagatay");

    isci b;
    b.yazdir();
    cout<<endl;
    isci b2(587000);
    b2.yazdir();
    cout<<endl;
    isci b3(580460,3.75);
    b3.yazdir();
    cout<<endl;
    isci b4(796940,8.255,"Babalar sozunu tutar");
    b4.yazdir();
    cout<<endl;

    return 0;
}
