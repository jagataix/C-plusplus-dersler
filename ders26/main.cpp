#include <iostream>
#include <cmath>



using namespace std;



int main()
{

    int sayi,i,kontrol=0,sonuc;

    do
    {
        cout<<"Pozitif bir sayi giriniz:";
        cin>>sayi;
        if(sayi<1)
        {
            cout<<"Lutfen 1'den buyuk bir sayi giriniz!\n";
            continue;
        }
        if(sayi==1)
        {
            break;
        }
        sonuc=sqrt(sayi);
        for(i=2; i<=sonuc; i++)
        {
            if(sayi%i==0)
            {
                kontrol=1;
            }
            else
            {
                kontrol=0;
            }
        }
        if(kontrol)
            cout<<sayi<<" asal bir sayi degildir\n";
        else
            cout<<sayi<<" asal bir sayidir\n";

    }
    while(sayi!=1);



    return 0;
}
