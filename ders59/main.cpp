#include <iostream>


using namespace std;

void sirala(int x[]);
void dizi_goster(int x[]);
void dizi_tersten_goster(int x[]);

int sayilar[7];

int main()
{
    cout<<"Dizi elemanlarini giriniz : ";

    for(short int i=0;i<7;i++)
        cin>>sayilar[i];
    cout<<endl<<"Siralamadan once"<<endl;

    dizi_goster(sayilar);

    cout<<endl<<endl<<"Siralaniyor..."<<endl;

    sirala(sayilar);


    cout<<endl<<"Siralamadan sonra(kucukten buyuge)"<<endl;

    dizi_goster(sayilar);

    cout<<endl<<"Siralamadan sonra(buyukten kucuge)"<<endl;

    dizi_tersten_goster(sayilar);

    cout<<endl;

    return 0;
}
void sirala(int x[])
{
     int degistir;

     for(short int i=0;i<7;i++)
     {
         for(short int j=i;j<7;j++)
         {
             if(x[i]>x[j])
             {
                degistir=x[i];
                x[i]=x[j];
                x[j]=degistir;
             }

         }
     }
}

void dizi_goster(int x[])
{
    for(short int i=0;i<7;i++)
        cout<<x[i]<<" ";

}
void dizi_tersten_goster(int x[])
{
    for(short int i=0;i<7;i++)
        cout<<x[6-i]<<" ";

}




