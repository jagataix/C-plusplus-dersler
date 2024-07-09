#include <iostream>
#include <string>

using namespace std;

struct adres
{
    string sehir;
    string ilce;
    int kapi;
};

struct isci
{
    string ad;
    string soyad;
    int numara;
    adres nerdesin;

};


int main()
{
    isci kisi={"Cagatay","ALTINTOPAC",7446,{"KOCAELI","Gebze",37}};

    cout<<kisi.ad<<endl;
    cout<<kisi.soyad<<endl;
    cout<<kisi.numara<<endl;
    cout<<kisi.nerdesin.sehir<<endl;
    cout<<kisi.nerdesin.ilce<<endl;
    cout<<kisi.nerdesin.kapi<<endl;
    return 0;
}
