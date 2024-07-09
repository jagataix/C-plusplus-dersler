#include <iostream>

using namespace std;

int toplam(int);

int faktoriyel(int);

int main()
{
    //recursion(ozyinelemeli)

    int sonuc,sayi;

    cout<<"Bir sayi giriniz:";
    cin>>sayi;

    sonuc=toplam(sayi);
    cout<<"Sonuc : "<<sonuc<<endl;

    cout<<sayi<<"! : "<<faktoriyel(sayi)<<endl;



    return 0;
}

int toplam(int x)
{
    if(x>0)
        return x+toplam(x-1);
    else
        return 0;
}
int faktoriyel(int x)
{
    if(x==0)
        return 1;
    else
        return x*faktoriyel(x-1);
}
