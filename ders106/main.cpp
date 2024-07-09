#include <iostream>
#include <string>
//komutari teker teker kapatip denemek daha mantikli aksi takdirde input islemleri birbirine karisiyor
using namespace std;


int main()
{
    int a=2,b=0;



    if(b==0)
        cerr<<"Bu sayi 0'a bolunemez"<<endl;//hata mesajlari icin kullaniyoruz
    else
        cout<<a/b;

    wchar_t pi=L'A';//unicode karakterler icin kullaniyoruz

    wcout<<pi<<endl;//unicode karakterleri yazdirmak icin kullaniyoruz
    cout<<sizeof(pi)<<endl;

    int x=4;

    clog<<"Sayi "<<x<<" verildi"<<endl<<endl;//loglama islemi icin kullanilir
    //bir dosyaya kayit icin komut


    int gh;

    char z=cin.get();//tek bir karakter almak icin kullaniyoruz

    cout<<z<<endl;
    //'cin' bosluktan sonrasini okumuyor

    cout<<"----------"<<endl;


    char dizi[30];

    cin.get(dizi,7);//alacagi karakter sayisini belirleyebiliyoruz
    //(girdigimiz sayi-1) tane karakter aliyor
    cout<<dizi<<endl;

    cin.get(dizi,24,'.');//belirledigimiz karaktere kadar okumasini saglayabiliyoruz

    cout<<dizi<<endl;

    cin.getline(dizi,30,',');//bu sekilde de alabiliyoruz
    cout<<dizi<<endl;

    string cumle;

    getline(cin,cumle);//bu sekilde bosluklu bir sekilde girdi yapabiliyoruz
    cout<<cumle<<endl;

    char dizi2[]="Bir varmis bir yokmus";
    cin.read(dizi2,7);//girisi alip diziye girisin kac karakterini yazdirabilecegimize karar verebiliyoruz
    cout<<dizi2<<endl;

    char dizi3[30];
    cin.get(dizi3,6);
    int sayi=cin.gcount();//kac karakter aldigini gosteriyor
    cout<<sayi<<" adet karakter alindi ("<<dizi3<<")"<<endl;

    return 0;
}
