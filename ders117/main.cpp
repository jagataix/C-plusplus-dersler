#include <iostream>
#include <string>
#include <vector>


using namespace std;


//STANDART TEMPLATE LIBRARY

//vektorler dinamik dizilerdir

int main()
{

    vector<int> sayilar(20);

    sayilar= {1,2,3,4,5,6,7,8,9,10,11,12,13};

    for(short int i=0; i<10; i++)
        sayilar[i]=i+1;

    cout<<sayilar[5]<<endl;//diziler gibi kullanabiliyoruz

    int* x=sayilar.data();//'data()' vektorun adresini verir

    cout<<*(x+9)<<endl;//adres uzerinden degere eristik

    cout<<"size()     : "<<sayilar.size()<<endl;//eleman sayisini verir
    cout<<"capacity() : "<<sayilar.capacity()<<endl;//kapasiteyi verir
    cout<<"max_size() : "<<sayilar.max_size()<<endl;//maksimum tutulabilecek eleman sayisini verir


    sayilar.resize(6);//yeniden boyutlandirma

    cout<<"sonra      : "<<sayilar.size()<<endl;

    if(sayilar.empty() == true)//vektorcun bos olup olmadigini kontrol etmek icin kullanabiliriz
        cout<<"Vektor bos"<<endl;
    else
        cout<<"Vektor bos degil"<<endl;


    cout<<endl<<endl;

    vector<int> sayilar2(10);

    sayilar2= {1,2,3,4,5,6,7,8,9,10};

    cout<<"Ilk boyut : "<<sayilar2.size()<<endl;

    cout<<"Vektor elementleri : ";
    for(short int i=0; i<10; i++)
        cout<<sayilar2[i]<<" ";

    cout<<endl;

    sayilar2.resize(6);
    sayilar2.shrink_to_fit();//vektorun kapasitesini boyutuna uyacak sekilde ayarlayip elemanlari düzenliyor

    cout<<"Ikinci boyut : "<<sayilar2.size()<<endl;

    cout<<"Vektor elementleri : ";
    for(short int i=0; i<10; i++)
        cout<<sayilar2[i]<<" ";


    sayilar2.reserve(200);//tasima maliyetinden ve zamandan tasarruf saglar
    //maksimum eleman sayimizi ongordugumuz zaman kullanabiliriz




    return 0;
}
