#include <iostream>
#include <string>

using namespace std;


int main()
{
    string x,y,z;

    x="20";
    y="70";
    z=x+y;

    cout<<z<<endl;

    string cumle="la napiyon ustad";
    cout<<"boyut : "<<cumle.size()<<endl;//boyut alma
    cout<<"boyut : "<<cumle.length()<<endl;

    string isim;

    cout<<"Isminizi giriniz : ";
    getline(cin,isim);

    if(isim.length()<5)
    {
        cout<<"Bu alan 5 karakterden daha az olamaaz"<<endl;
        cout<<"Boyut : "<<isim.length()<<endl;
    }
    else
    {
        cout<<"Merhaba "<<isim<<endl;
    }

    string yaz="Bune";

    yaz[0]='S';

    cout<<yaz[0]<<endl;
    cout<<yaz[1]<<endl;
    cout<<yaz[2]<<endl;
    cout<<yaz[3]<<endl;

    string yazalim="Benim adim \"Cagatay\"";
    cout<<yazalim<<endl;
    string yazalim2="lsdnmfpds \\ slvdmv";
    cout<<yazalim2<<endl;



    return 0;
}
