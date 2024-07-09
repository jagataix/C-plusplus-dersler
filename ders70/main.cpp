#include <iostream>



using namespace std;

int en_kucuk_en_buyuk(int*,int,int*,int*);



int main()
{
    int sayilar[10]={6,5,8,23,-5,3,0,65,-53,1};

    int kucuk=sayilar[0];
    int buyuk=sayilar[0];

    en_kucuk_en_buyuk(sayilar,sizeof(sayilar)/sizeof(sayilar[0]),&buyuk,&kucuk);

    cout<<"En buyuk : "<<buyuk<<endl;
    cout<<"En kucuk : "<<kucuk<<endl;


    return 0;
}

int en_kucuk_en_buyuk(int x[],int y,int* buyuk,int* kucuk)
{

    for(short int i=1;i<y;i++)
    {
        if(x[i]>*buyuk)
            *buyuk=x[i];
        if(x[i]<*kucuk)
            *kucuk=x[i];
    }

}

