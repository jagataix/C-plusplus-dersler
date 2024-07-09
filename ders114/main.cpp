#include <iostream>
#include <string>
#include <fstream>


using namespace std;




int main()
{
    ofstream cikis_dosya("dosya.txt",ios::out);

    cikis_dosya<<"Cagatay ALTINTOPAC"<<endl;
    cikis_dosya<<"Suan hersey kiyak gibi"<<endl;
    cikis_dosya<<"Citirindan bir kod"<<endl;
    cikis_dosya.seekp(0,ios::beg);//yazma islemine bastan devam etmek istersek kullanabiliriz

    //'ios::beg' basa gitmek icin
    //'ios::end' sona gitmek icin
    //'ios::cur' mevcut konumda kalmak icin

    cikis_dosya<<"Ee ne oldu be abbi ne oldu be ogglum"<<endl;
    cikis_dosya.close();
    cout<<"Dosya guncellendi"<<endl;

    fstream cikis_dosya2("dosya2.txt");
    cikis_dosya2<<"Cagatay"<<endl;
    cikis_dosya2<<41<<endl;
    cikis_dosya2<<893.63<<endl;

    cikis_dosya2.clear();
    cikis_dosya2.seekg(4,ios::beg);//okuma islemine bastan devam etmek istersek kullanabiliriz
    //4 karakterden sonra oku diyoruz
    //- li bir deger girersek sondan geriye dogru sayar ve imleci o noktaya getirir
    cout<<"Imlecin ilk yeri : "<<cikis_dosya2.tellg()<<endl;//imlecin nerede oldugunu ogrenmek istersek kullanabiliriz
    char dizi[50];
    int plaka;
    float sayi;

    cikis_dosya2>>dizi;
    cikis_dosya2>>plaka;
    cikis_dosya2>>sayi;

    cout<<"Imlecin sonraki yeri : "<<cikis_dosya2.tellg()<<endl;

    cout<<dizi<<endl;
    cout<<plaka<<endl;
    cout<<sayi<<endl;

    return 0;
}
