#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    srand(time(NULL));

    int sayi=0;

    for(short int i=1;i<=10;i++)
    {
        sayi=rand()%100+100;
        cout<<i<<". rastgele sayimiz : "<<sayi<<endl;
    }

    cout<<endl<<endl;

    int sayim,rastgele,tahmin_sayisi=0,skor=100;

    srand(time(NULL));

    rastgele=rand()%100+1;

    //cout<<rastgele<<endl<<endl;


    cout<<"100 ile 1 arasinda bir sayiyi tahmin ediniz"<<endl;

    do
    {
        cout<<"Sayi tahmininiz : ";
        cin>>sayim;

        if(sayim==-1) break;
        if(sayim<1 || sayim>100)
        {
            cout<<"Lutfen 1 ile 100 arasinda bir sayi giriniz"<<endl;
            continue;
        }
        tahmin_sayisi++;

        if(sayim==rastgele)
        {
            cout<<"Tebrikler, "<<tahmin_sayisi<<". tahminizde sayiyi dogru tahmin ettiniz!"<<endl;
            break;
        }
        else
        {
            if(sayim<rastgele)
               cout<<"Daha buyuk bir sayi giriniz."<<endl;
            else
               cout<<"Daha kucuk bir sayi giriniz."<<endl;
            skor-=10;
        }
    }while(sayim!=-1);

    cout<<"Skor : "<<(skor<0?0:skor)<<endl;





    return 0;
}
