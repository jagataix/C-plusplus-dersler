#include <iostream>
#include <string>
#include <vector>//vektor icin bu kutuphaneyi eklememmiz gerekiyor


using namespace std;


//STL : verinin bellekteki organizyanonuna yonelik bir calismadir

int main()
{
    vector<int> sayilar;//bu sekilde vektor olusturuyoruz
    vector<float> sayilar2(10);
    //boyutunu belirtmek zorunda degiliz ister isek bu sekilde belirtiriz
    //boyutu islenen veriye gore dinamik bir sekilde degisiyor
    //vector dizi benzeri bir yapidir

    sayilar2={1,2,3,4,5,6,7,8,9,10,11,12,13,14};//vektorun icine degerler atadik

    for(int a:sayilar2)//vektorun icindaki degerlere dongu ile ulasiyoruz
        cout<<a<<" ";

    cout<<endl;

    vector<int> vektor(5,8);//icine 5 adet 8 degeri atadik

    for(int a:vektor)
        cout<<a<<" ";

    cout<<endl;

    cout<<"at    : "<<sayilar2.at(5)<<endl;//5 indeks numarali degeri yazdiriyoruz

    cout<<"front : "<<sayilar2.front()<<endl;//ilk deger

    cout<<"back  : "<<sayilar2.back()<<endl;//son deger

    cout<<endl;

    cout<<"begin()-end()"<<endl;

    for(auto i=sayilar2.begin();i!=sayilar2.end();i++)
        cout<<*i<<" ";//ilk elemandan son elemana kadar yazdiriyoruz

    cout<<endl<<endl;

    cout<<"cbegin()-cend()"<<endl;

    for(auto i=sayilar2.cbegin();i!=sayilar2.cend();i++)
        cout<<*i<<" ";//ilk elemandan son elemana kadar yazdiriyoruz

    cout<<endl<<endl;

    cout<<"rbegin()-rend()"<<endl;

    for(auto i=sayilar2.rbegin();i!=sayilar2.rend();i++)
        cout<<*i<<" ";//tersten yazdiriyoruz

    cout<<endl<<endl;

    cout<<"crbegin()-crend()"<<endl;

    for(auto i=sayilar2.crbegin();i!=sayilar2.crend();i++)
        cout<<*i<<" ";//tersten yazdiriyoruz

    cout<<endl;



    return 0;
}
