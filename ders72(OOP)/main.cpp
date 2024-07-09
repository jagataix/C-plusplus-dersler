#include <iostream>
#include <string>


using namespace std;

//OBCJECT ORIENTED PROGRAMMING (NESNEYE YONELIK PROGRAMLAMA)

//OOP den once procedural veya functional programlama yapiyorduk


class sinif//sýnýf mantýgý var bu sekilde tanimliyoruz
{
//derli toplu calismamiza imkan sagliyor
//hata ayiklamasini kolaylastiriyor

public://access specifier
    //main icerisinde ulasmak icin

    int sayi1;//attribute
    int sayi2;//attribute
    string adim;//attribute

};

class arac
{
public:
    int agirlik;
    string renk;
    string adi;

    void surus()//method
    {

    }
    void fren()//method
    {

    }

};


int main()
{

    sinif nesne;//nesne olusturduk ve classimiza tanimladik

    nesne.sayi1=4;
    nesne.sayi2=6;
    nesne.adim="Cagatay";

    cout<<nesne.adim<<endl;
    cout<<nesne.sayi1<<endl;
    cout<<nesne.sayi2<<endl<<endl;

    sinif nesne2;

    nesne2.sayi1=13;
    nesne2.sayi2=21;
    nesne2.adim="ALTINTOPAC";

    cout<<nesne2.adim<<endl;
    cout<<nesne2.sayi1<<endl;
    cout<<nesne2.sayi2<<endl<<endl;

    arac mercedes;

    mercedes.agirlik=300;
    mercedes.renk="Beyaz";
    mercedes.adi="Mercedes";

    cout<<"Aracin markasi  : "<<mercedes.adi<<endl;
    cout<<"Aracin rengi    : "<<mercedes.renk<<endl;
    cout<<"Aracin agirligi : "<<mercedes.agirlik<<endl<<endl;

    arac peogout;

    peogout.agirlik=180;
    peogout.renk="Gri";
    peogout.adi="Peogout";

    cout<<"Aracin markasi  : "<<peogout.adi<<endl;
    cout<<"Aracin rengi    : "<<peogout.renk<<endl;
    cout<<"Aracin agirligi : "<<peogout.agirlik<<endl<<endl;

    return 0;
}
