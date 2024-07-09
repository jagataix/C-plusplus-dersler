#include <iostream>
#include <string>


using namespace std;

void sayilari_degistir(int &x,int &y);

int main()
{
    string yemek="Lahmacun";
    string &yeriz=yemek;

    cout<<yemek<<endl;
    cout<<&yemek<<endl;//adres degeri yazar
    cout<<yeriz<<endl;

    int ilksayi=16,ikincisayi=38;

    cout<<"Once "<<ilksayi<<" "<<ikincisayi<<endl;
    sayilari_degistir(ilksayi,ikincisayi);
    cout<<"Sonra "<<ilksayi<<" "<<ikincisayi<<endl;


    return 0;
}

void sayilari_degistir(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
