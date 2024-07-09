#include <iostream>
#include <string>

using namespace std;



int main()
{
    int sayilar[7];

    cout<<"Dizi elemanlarini giriniz : ";

    for(short int i=0; i<7; i++)
        cin>>sayilar[i];

    cout<<endl<<endl<<"Dizi elemanlari : ";

    for(short int i=0; i<7; i++)
        cout<<sayilar[i]<<" ";


    cout<<endl<<endl<<"Dizi elemanlari tersten : ";

    for(short int i=0; i<7; i++)
        cout<<sayilar[6-i]<<" ";

    cout<<endl<<endl;

    int x;

    cout<<"Pozitif bir sayi giriniz : ";
    cin>>x;

    int sayilar2[x];

    cout<<"Dizi elemanlarini giriniz : ";

    for(short int i=0; i<x; i++)
        cin>>sayilar2[i];

    cout<<endl<<endl<<"Dizi elemanlari : ";

    for(short int i=0; i<x; i++)
        cout<<sayilar2[i]<<" ";


    cout<<endl<<endl<<"Tek sayilar : ";

    for(short int i=0; i<x; i++)
    {
        if(sayilar2[i]%2)
        cout<<sayilar2[i]<<" ";
    }

    cout<<endl<<endl<<"Cift sayilar : ";

    for(short int i=0; i<x; i++)
    {
        if(sayilar2[i]%2==0)
        cout<<sayilar2[i]<<" ";
    }




    return 0;
}
