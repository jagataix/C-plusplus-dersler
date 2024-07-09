#include <iostream>
#include <string>
#include <fstream>


using namespace std;



int main()
{

    string dosya_ismi="kisi.txt";

    ofstream dosya_olustur(dosya_ismi);

    dosya_olustur<<"Bu sadece bir ornektir."<<endl;

    dosya_olustur.close();

    fstream dosya(dosya_ismi,ios::ate | ios::out | ios::in);//'ate' serbest yazma modu
    int sayi=dosya.tellp();//karakter sayisini aliyoruz
    //istedigimiz yere yazdirma yapacagiz
    dosya<<"Ben artik bundan sonra ders almam ders veririm kardes"<<endl;
    dosya<<"Ha oyle miymis knk?";

    dosya.seekp(sayi);//imlecin yerini degistirmek icin kullaniyoruz

    dosya<<"Hoppala pasam Malkara Kesan";

    dosya.close();


    ofstream dosya2("kisiler2.txt",ios::binary | ios::out);
    char harf;


    for(harf='A';harf<='Z';harf++)
        dosya2.put(harf);

    dosya2.close();

    ifstream oku("kisiler2.txt",ios::binary | ios::in);

    while(oku.get(harf))
    {
        cout<<harf;//ASCII tablosundaki degere gore okuyor ve yaziyor
    }

    oku.close();






    return 0;
}
