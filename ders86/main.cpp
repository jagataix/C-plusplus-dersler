#include <iostream>
#include <string>

using namespace std;//iostream icindeki std namespace'ini cagirmak icin kullaniyoruz
//using komutunu her defasinda namespace'i cagirmamak icin kullaniyoruz
//cout cin gibi komutlar

namespace karistirma1//isim cakismalarini onlemek icin kullanilir
{
//local'lestirme yapiyoruz
//ayni degisken,sinif ya da fonksiyon adlari kullanilirsa bu karisikligi onlemek icin kullaniyoruz
int y=92;
void fonksiyon3()
{
    int y=2;
    cout<<"y : "<<y<<endl;
}
class hayvan
{
public:
    int y=94;
};
}

namespace karistirma2
{
int y=37;
void fonksiyon3()
{
    int y=54;
    cout<<"y : "<<y<<endl;
}
class hayvan
{
public:
    int y=295;
};
}

int b=35;//global variable
int c=78;

void fonksiyon()
{
    int a=63;//local variable
    //ayni adli bir variable icin her zaman ilk locale bakilir
    cout<<"a : "<<a<<endl;
}
void fonksiyon2()
{
    int c=882;//yoruma alirsan c'nin globaldeki degeri olan 78'i yazadirir

    cout<<"c : "<<c<<endl;
}

int main()
{
    //cout<<"a : "<<a<<endl;//bu variable'a main'de ulasilamaz
    cout<<"b : "<<b<<endl;//buna ulasabilir cunku global

    int c=471;//bunu yoruma alirsan main icerisinde c degeri 78 olur

    fonksiyon2();

    cout<<"c : "<<c<<endl<<endl;

    cout<<"karistirma1::y : "<<karistirma1::y<<endl;
    cout<<"karistirma2::y : "<<karistirma2::y<<endl<<endl;

    cout<<"karistirma1::fonksiyon3() = ";
    karistirma1::fonksiyon3();//istedigimiz namespace'e bu sekilde ulasiyoruz
    cout<<"karistirma2::fonksiyon3() = ";
    karistirma2::fonksiyon3();
    cout<<endl;

    karistirma1::hayvan h1;//class'imiza eristik
    karistirma2::hayvan h2;

    cout<<"karistirma1::hayvan h1 y'si = "<<h1.y<<endl;
    cout<<"karistirma2::hayvan h2 y'si = "<<h2.y<<endl<<endl<<endl;

using namespace karistirma1;
//using  karistirma1::y; //bunu da kullanaibliriz ama diger ozellikleri(fonksiyon,class) kullanamayiz eger boyle yaparsak

    fonksiyon3();//tanimladigimiz namespace'i artik her defasinda cagirmadan kullanabiliriz
    cout<<"karistirma1::y : "<<y<<endl;


    return 0;
}
