#include <iostream>
#include <math.h>




using namespace std;


int main()
{
    short int sayi,kontrol=1,sonuc;

    cout<<"Bir sayi giriniz: ";
    cin>>sayi;

    if(sayi<2)
    {
        cout<<"Lutfen 2 den kucuk bir sayi girmeyiniz";
        return 0;
    }

    sonuc=sqrt(sayi);

    for(short int i=2; i<=sonuc; i++)
    {
        if(sayi%i==0)
        {
            kontrol=0;
            break;
        }

    }
    if(kontrol)
    {
        cout<<sayi<<" asal bir sayidir.\n";
    }
    else
    {
        cout<<sayi<<" asal bir sayi degildir.\n";
    }



    return 0;
}
