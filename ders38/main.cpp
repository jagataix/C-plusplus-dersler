#include <iostream>
#include <string>
#include <math.h>



using namespace std;

int toplam(int,int);

double toplam(double,double);

float us_alma(float,float);

int main()
{
    //overloading

    //bir fonksiyon adini farkli veri tipleri ile tanimlayarak farkli sekillerde kullanabiliyoruz

    //"inline" diye birsey var arastirilabilir bazen yavas bazen hizli calisabiliyormus

    int x=toplam(4,8);

    double y=toplam(24.2,65.7);

    cout<<"Int = "<<x<<endl;
    cout<<"Double = "<<y<<endl;

    float a,b;

    cout<<"Iki sayi giriniz: ";
    cin>>a>>b;


    cout<<a<<" ussu "<<b<<" = "<<us_alma(a,b)<<endl;

    cout<<a<<" ussu "<<b<<" = "<<pow(a,b);

    return 0;
}

int toplam(int x,int y)
{
    return x+y;
}

double toplam(double x,double y)
{
    return x+y;
}

float us_alma(float x,float y)
{

    float sonuc=1;

    if(x==0)
        sonuc=0;

    else if(y==0)
        sonuc=1;

    else if(y<0)
    {
        for(short int i=0; i<-y; i++)
        {
            sonuc*=1/x;
        }
    }
    else
    {
        for(short int i=0; i<y; i++)
        {
            sonuc*=x;
        }
    }


    return sonuc;
}
