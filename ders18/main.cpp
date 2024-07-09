#include <iostream>
#include <math.h>



using namespace std;



int main()
{

    short int x=80,y=80;
    x>>=1;//buradaki degerin 2li ustel ifadesine boler sonuc 40 olmali
    y<<=2;//buradaki degerin 2li ustel ifadesiyle carpar sonuc 320 olmali
    cout<<x<<"  "<<y<<endl;
    //bu right ve left shift soketler uzerinde iletisim,sikistirma gibi islerde kullaniliyormus

    short int sayi,sonuc,ab,cd;

    cout<<"Bir sayi giriniz: ";
    cin>>sayi;

    ab=sayi/100;
    cd=sayi%100;
    sonuc=pow((ab+cd),2);
    if(sonuc==sayi)
    {
        cout<<"Bu bir ozel sayidir."<<endl;
    }
    else
    {
        cout<<"Bu bir ozel sayi degildir."<<endl;
    }


    return 0;
}
