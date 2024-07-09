#include <iostream>
#include <string>
#include <fstream>

//dosya harddiske kaydetmeden once tampon bir bellege yazilir
using namespace std;




int main()
{
    char harf;

    ofstream cikis_dosya("test.txt");
    for(harf='a';harf<='z';harf++)
        cikis_dosya.put(harf);

    ifstream giris_dosya("test.txt");
    //dosyayi kapatmadigimiz surece verimiz tampon bellekte duracak
    cout<<"Ilk okuma       : ";

    while(giris_dosya.get(harf))
        cout<<harf;//herhangi birsey yazmayacak cunku dosyayi kapatmadik


    cikis_dosya.close();
    giris_dosya.clear();
    giris_dosya.seekg(0);//asagida okumasi icin imleci dosyanin basina cekiyoruz

    cout<<endl<<"Ikinci okuma    : ";

    while(giris_dosya.get(harf))
        cout<<harf;

    giris_dosya.close();

    ofstream cikis_dosya2("test2.txt");
    for(harf='a';harf<='z';harf++)
        cikis_dosya2.put(harf);
        cikis_dosya2.flush();//bu sekilde tampon bellege yazilmadan direkt harddiske girmis oluyoruz

     ifstream giris_dosya2("test2.txt");

    cout<<endl<<"Flush'li okuma  : ";

    while(giris_dosya2.get(harf))
        cout<<harf;//bu sefer direkt harddiske yazdigi icin okuyabilecek





    return 0;
}
