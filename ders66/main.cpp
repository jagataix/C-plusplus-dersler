#include <iostream>


using namespace std;


int main()
{
    int a=15;

    int& b=a;//takma ad pointer gibi dusunme

    a=6;

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    int y=8;

    int* ptr=&y;

    cout<<"y : "<<y<<endl;
    cout<<"y'nin adresi : "<<&y<<endl;

    cout<<"ptr : "<<ptr<<endl;
    cout<<"ptr'nin adresi : "<<&ptr<<endl;

    cout<<"y'nin adresine gidip degeri al : "<<*ptr<<endl<<endl<<endl;


    double sayi=2.17;
    double* k=&sayi;
    double* m=&sayi;

    cout<<"sayi'nin adresi : "<<&sayi<<endl;
    cout<<"k'nin adresi    : "<<&k<<endl;
    cout<<"m'nin adresi    : "<<&m<<endl<<endl;
    cout<<"sayi'nin degeri : "<<sayi<<endl;
    cout<<"k'nin degeri    : "<<k<<endl;
    cout<<"m'nin degeri    : "<<m<<endl<<endl<<endl;
    *m=52.49;
    cout<<"sayi'nin adresi : "<<&sayi<<endl;
    cout<<"k'nin adresi    : "<<&k<<endl;
    cout<<"m'nin adresi    : "<<&m<<endl<<endl;
    cout<<"sayi'nin degeri : "<<sayi<<endl;
    cout<<"k'nin degeri    : "<<k<<endl;
    cout<<"m'nin degeri    : "<<m<<endl<<endl<<endl;

    int sayi2=3;

    int* ptr2=&sayi2;

    cout<<"ptr2  : "<<ptr2<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl<<endl;
    ptr2++;
    cout<<"ptr2  : "<<ptr2<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl<<endl;
    ptr2++;
    cout<<"ptr2  : "<<ptr2<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl<<endl;




    return 0;
}
