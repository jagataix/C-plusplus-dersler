#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;



int main()
{
    int sonuc=remove("silbunu6.txt");//dosya silme

    if(sonuc==0)//silinirse degeri '0' olur
        cout<<"Dosya silindi"<<endl;
    else
        cout<<"Dosya silinemedi"<<endl;

    ifstream oku("silbunu2.txt");

    if(oku.is_open())
    {
        int a,b,c,d;
        oku>>a>>b>>c>>d;//dosyadan okuma islemini bu sekilde yapabiliriz
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        oku.close();
    }
    else
    {
        cerr<<"Boyle bir dosya yok"<<endl;
    }


    ifstream oku2("silbunu3.txt");

    if(oku2.is_open())
    {
        string yazi;

        while(!oku2.eof())//dosya sonu gelmedigi surece dongu donecek
        {
            getline(oku2,yazi);
            cout<<yazi;
        }
        oku2.close();
    }
    else
    {
        cerr<<"Boyle bir dosya yok"<<endl;
    }

    cout<<endl;

    ofstream dosya;
    dosya.open("kisi2.txt",ios::app | ios::out);//ekleme modu ve yazma modu
    //'app' modu sayesinde her defasinda sona ekliyor
    //birden fazla mod ekleyebiliriz
    if(dosya.is_open())
    {
        string ad,soyad;
        int yas;
        cout<<"Adi giriniz : ";
        cin>>ad;
        cout<<"Soyadi giriniz : ";
        cin>>soyad;
        cout<<"Yasi giriniz : ";
        cin>>yas;
        dosya<<endl<<ad<<setw(20)<<soyad<<setw(20)<<yas<<endl;
        dosya.close();

    }
    else
    {
        cout<<"Boyle bir dosya bulunamadi"<<endl;
    }



    return 0;
}
