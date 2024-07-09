#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>



using namespace std;

class kisi//dosya islemlerimizi class'larla da kullanabiliyoruz
{
    string ad,soyad,cumle;
    int yas;
    ofstream cikis_dosya;
    ifstream giris_dosya;
public:
    void dosya_yaz(string a,string b,int c)
    {
        cikis_dosya.open("kisiler.txt",ios::out | ios::app);
        cikis_dosya<<endl<<a<<setw(10)<<b<<setw(10)<<c;
        cikis_dosya.close();
    }
    void dosya_oku()
    {
        giris_dosya.open("kisiler.txt",ios::in);
        while(!giris_dosya.eof())
        {
            getline(giris_dosya,cumle);
            cout<<cumle<<endl;
        }
        giris_dosya.close();
    }
};

int main()
{
    kisi adam;

    adam.dosya_yaz("Cagatay","ALTINTOPAC",20);
    adam.dosya_yaz("Murat","AKBABA",37);
    adam.dosya_yaz("Yasin","PAZARCI",12);
    adam.dosya_yaz("Lale","OZSOY",25);

    adam.dosya_oku();

    cout<<endl<<endl;

    ofstream cikis_test("test.txt");

    cikis_test<<"KOCAELI UNIVERSITESÝ"<<endl;
    cikis_test<<"Bilgisayar H Muhendisligi"<<endl;
    cikis_test<<"Programalama baya kiyak abi"<<endl;

    cikis_test.close();

    ifstream giris_test("test.txt");


    char harfler[100];

    int sayi=giris_test.peek();//dosyadaki ilk veriyi aliyor

    cout<<(char)sayi<<endl;

    while (!giris_test.eof())
    {
        giris_test.ignore(20,'H');//belirledigimiz karaktere kadar calismamasini istiyorsak bunu kullanacagiz
        //istedimiz sayida karakteri silebiliyoruz
        giris_test.getline(harfler,100);
        cout<<harfler<<endl;
    }
    giris_test.close();


    return 0;
}
