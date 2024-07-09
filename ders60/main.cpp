#include <iostream>



using namespace std;



int main()
{
    int boyut,en_yuksek=0,en_dusuk=100,buyugun_indis,kucugun_indis;

    cout<<"Siniftaki ogrenci sayisini giriniz : ";
    cin>>boyut;

    int notlar[boyut],numaralar[boyut];

    for(short int i=0;i<boyut;i++)
    {
         cout<<"Okul numarasi / Notu : ";
         cin>>numaralar[i]>>notlar[i];
    }

    for(short int i=0;i<boyut;i++)
    {
         if(en_yuksek<notlar[i])
         {
             en_yuksek=notlar[i];
             buyugun_indis=i;
         }
         if(en_dusuk>notlar[i])
         {
             en_dusuk=notlar[i];
             kucugun_indis=i;
         }

    }

    cout<<endl<<endl;

    cout<<"En yuksek notu alan ogrencinin numarasi "<<numaralar[buyugun_indis]<<" notu "<<notlar[buyugun_indis]<<endl;

    cout<<"En dusuk notu alan ogrencinin numarasi "<<numaralar[kucugun_indis]<<" notu "<<notlar[kucugun_indis]<<endl;


    return 0;
}
