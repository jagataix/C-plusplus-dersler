#include <iostream>
#include <string>

using namespace std;

void ulkem(string a="Turkiye",int sayi=41)
{
    cout<<a<<" "<<sayi<<endl;
}

int toplam(int x,int y)
{
    return x+y;
}
int main()
{
    int sonuc,a=12,b=8;

    sonuc=toplam(a,b)*5;
    ulkem();
    ulkem("Ingiltere",56);
    ulkem("Almanya",82);
    ulkem("Fransa",16);
    cout<<sonuc<<endl;
    return 0;
}
