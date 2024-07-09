#include <iostream>


using namespace std;


void degistir(int);

void degistir2(int*);

float kare_al(float*);

int toplama_yap(int a,int b)
{
    return a+b;
}

int topla(int a,int b)
{
    return a+b;
}

int main()
{
    int sayi=53;
    cout<<"Sayinin fonksiyondan onceki degeri    : "<<sayi<<endl;

    degistir(sayi);

    cout<<"Sayinin 1.fonksiyondan sonraki degeri : "<<sayi<<endl<<endl;

    degistir2(&sayi);

    cout<<"Sayinin 2.fonksiyondan sonraki degeri : "<<sayi<<endl<<endl<<endl;

    float ondalikli;

    cout<<"Bir sayi giriniz : ";
    cin>>ondalikli;
    cout<<"Yazdiginiz sayinin karesi : "<<kare_al(&ondalikli)<<endl<<endl;


    int (*fonksiyon)(int,int);//fonksiyonlari bu sekilde pointer seklinde kullanabiliyoruz

    fonksiyon=toplama_yap;
    cout<<"46 + 23 = "<<fonksiyon(46,23)<<endl;
    fonksiyon=&topla;
    cout<<"46 + 23 = "<<(*fonksiyon)(46,23)<<endl;

    return 0;
}

void degistir(int a)
{
    a=26;
    cout<<"Sayinin 1.fonksiyon icindeki degeri   : "<<a<<endl;
}

void degistir2(int* a)
{
    *a=26;
    cout<<"Sayinin 2.fonksiyon icindeki degeri   : "<<*a<<endl;
}

float kare_al(float* x)
{
    return *x * *x;
}
