#include <iostream>
#include <string>

using namespace std;


int main()
{
    string mesaj;

    cout<<"Bir mesaj giriniz : ";
    getline(cin,mesaj);

    int uzunluk=mesaj.size();

    cout<<mesaj<<endl;

    mesaj.resize(uzunluk+5,'*');
    cout<<mesaj<<endl;

    mesaj.resize(13);
    cout<<mesaj<<endl;

    cout<<"\n\n";

    string cumle;

    cout<<"Bir cumle giriniz:";
    getline(cin,cumle);
    cout<<"Boyut : "<<cumle.size()<<endl;
    cout<<"Uzunluk : "<<cumle.length()<<endl;
    cout<<"Kapasite : "<<cumle.capacity()<<endl;
    cout<<"Maksimum Boyut : "<<cumle.max_size()<<endl;

    cout<<"\n\n";

    string cumle2;

    cout<<"Bir cumle giriniz:";
    getline(cin,cumle2);

    cout<<"Yazdigin sey : "<<cumle2<<endl;

    cumle2.clear();

    cout<<"Sonra boyle : "<<cumle2;
    cout<<cumle2<<endl;

    string yaz(50,'G');

    cout<<"1. string'in kapasitesi : "<<yaz.capacity()<<endl;
    yaz.resize(10);
    cout<<"2. string'in kapasitesi : "<<yaz.capacity()<<endl;
    yaz.shrink_to_fit();
    cout<<"2. string'in kapasitesi : "<<yaz.capacity()<<endl;

    cout<<"\n\n";

    string ad;

    cout<<"Bir cumle giriniz : ";
    getline(cin,ad);

    cout<<ad.at(4)<<endl;//dizinin indislerine ulasma
    cout<<ad.at(2)<<endl;
    cout<<ad.back()<<endl;
    cout<<ad.front()<<endl;

    ad.front()='H';
    ad.back()='!';
    ad.at(4)='L';

    cout<<ad<<endl;



    return 0;
}
