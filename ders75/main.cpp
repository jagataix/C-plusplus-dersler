#include <iostream>
#include <string>



using namespace std;



class sinif
{
public://access specifier (yesil)

    int a=26;
    sinif()
    {
        cout<<"Daha yeni basladik"<<endl;
    }

    //bunlar kendi kendine cagriliyorlar destructor butun islemler bittikten sonra calisir
    //destructor parametre almaz
    ~sinif()//destructor
    {
        cout<<"Hersey bitti suan"<<endl;
    }
    int yaz()
    {
        return c+d;
    }
protected://access specifier (mavi)

    //ulasamiyoruz
    //ozellikleri miras aldigimizda kullanilabilir yapar
    int b=63;

private://access specifier (kirmizi)

    //private yaptigimizda erisemiyoruz erismeye calistigimizda hata aliriz
    void mesaj()
    {
        cout<<"Bu bir metoddur"<<endl;
    }
    //bunlari veri guvenligi icin kullaniyoruz
    int c=10;
    int d=27;

public:
    //encapsulation
    void degistir(int x)//set metodu
    {
        c=x;//private bir attribute'u degistiriyoruz
    }
    int degeri_al()//get metodu
    {
        return c;//private bir attribute'e erisiyoruz
    }
};


int main()
{
    sinif nesne;

    cout<<nesne.a<<endl;

    //nesne.mesaj;

    cout<<nesne.yaz()<<endl;//private bilgileri gormemek icin toplayip yazdirdik

    cout<<nesne.degeri_al()<<endl;

    nesne.degistir(50000);

    cout<<nesne.degeri_al()<<endl;






    return 0;
}
