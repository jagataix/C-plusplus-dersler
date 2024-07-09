#include <iostream>
#include <string>
#include <iomanip>//cout ve cin manipulatorleri icin bu kutuphaneyi eklememiz gerekiyor


using namespace std;




int main()
{

    cout<<"Boolean"<<endl;
    cout<<true<<endl;
    cout<<boolalpha<<false<<endl;//true false seklinde yazdirmak icin kullaniyoruz
    cout<<noboolalpha<<true<<endl<<endl;//sayisal sekilde yazdirmak icin kullaniyoruz

    int x=15;
    cout<<dec<<x<<endl<<endl;//10'luk tabanda gosterim

    cout<<"16'lik ve 8'lik sistemde"<<endl;

    cout<<oct<<x<<endl;//8'luk tabanda gosterim
    cout<<hex<<x<<endl;//16'luk tabanda gosterim

    cout<<showbase<<hex<<x<<endl;//taban gosterme
    //birden fazla manipulasyon yapilabilir

    cout<<showbase<<uppercase<<hex<<x<<endl<<endl;//'uppercase' harfleri buyutmek icin

    float y=25.37;
    cout<<"Virgullu sayilar"<<endl;

    cout<<showpos<<y<<endl;//pozitif sayilar icin yanina '+' isareti ekler

    cout<<showpos<<showpoint<<y<<endl;//noktayi gosterir ve sona 0'lar ekler

    cout<<noshowpos<<noshowpoint<<fixed<<y<<endl;//virgulden sonra 6 basamak sayi olacak sekilde bosluklari '0' ile doldurur

    cout<<setprecision(1)<<y<<endl;//virgulden sonra kac basamak gostermek istedigimizi belirtebiliyoruz ama son gostermek istedigimiz sayiyi yuvarliyor

    cout<<scientific<<y<<endl;//bilimsel gosterim icin kullanabiliriz




    cout<<endl;//alt satira gecmek icin kullanabiliriz

    int b=-72;

    //bunlari yukaridakileri yoruma alip denemek gerekiyor

    cout.width(10);//karakter boslugu býrakmak icin kullanabiliriz
    cout<<left<<b<<endl;//sola yazdirir
    cout.width(10);
    cout<<internal<<b<<endl;//isaretiyle kendisini farkli taraflara yazdirir
    cout.width(10);
    cout<<right<<b<<endl;//saga yazdirir

    int c=50355663;
    float d=68.27;

    cout<<setw(10)<<c<<endl;//bosluk olusturulup sag tarafran itibaren deger yazdiriliyor

    cout<<setfill('.')<<setw(10)<<d<<endl;//bosluklari doldurmak icin karakter secebiliyoruz


    return 0;
}
