#include <iostream>
#include <string>
#include <ctime>//zaman islemleri icin eklememiz gerekiyor
#include <fstream>//dosya islemleri icin eklememiz gerekiyor

using namespace std;




int main()
{
    time_t sure;

    time(&sure);

    cout<<ctime(&sure)<<endl;//zamani gosteriyor

    clock_t saat=clock();

    int a=0;

    for(int i=0; i<10000000; i++)
        a+=i;
    clock_t gecen_sure=clock()-saat;//islemi kac saniyede yaptigini olcebiliyoruz

    cout<<"Gecen sure : "<<(float)gecen_sure/CLOCKS_PER_SEC<<" saniye"<<endl<<endl<<endl;


    ofstream dosya("dosya.txt");//dosya olusturma ve yazma

    if(!dosya)//dosyaya ulasildigini kontrol ediyor
    {
        cerr<<"Dosya bulunamadi"<<endl;
        exit(1);
    }
    fstream dosya2("dosya2.txt");//dosyaya yazma
    if(!dosya2)
    {
        cerr<<"Dosya bulunamadi"<<endl;
    }

    dosya<<"Kanka bu egitim seti bir turlu bitmiyor bayilanzi"<<endl;
    dosya<<"Merih ile Mert'in karizma saka mi?"<<endl;

    dosya.close();//dosyayi kapatma
    dosya2.close();

    ofstream dosya3("dosya3.txt");
    if(dosya3.is_open())//dosya acilabiliyor mu onu kontrol ediyor
    {
        cerr<<"REISS"<<endl;
        dosya3.close();
    }
    else
    {
        cerr<<"Bir problem var aga"<<endl;
    }

    ofstream dosya4("kutup/dosya4.txt");//dosya yoluyla da bir yerde dosya olusturabiliriz

    dosya4.close();



    ifstream dosya_oku("dosya.txt");//dosyadan okuma
    if(dosya_oku.is_open())
    {

//        while(dosya_oku)//bu sekilde de okunabilir
//        {
//            string yazi;
//            getline(dosya_oku,yazi);
//            cout<<yazi<<endl;
//        }

        string yazi;
        while(getline(dosya_oku,yazi))//satir satir okuyoruz
        {
            cout<<yazi<<endl;
        }

//        string yazi2;
//        while(getline(dosya_oku,yazi2,' '))//okuyacagi sinirlari secebiliyoruz
//        {
//            cout<<yazi2<<endl;
//        }

//        char harf;
//        while(dosya_oku.get(harf))//karakter karakter okuyoruz
//        {
//            cout<<harf<<endl;
//        }

        dosya_oku.close();
    }
    else
    {
        cout<<"Boyle bir dosya yok kardesim"<<endl;
    }


    return 0;
}
