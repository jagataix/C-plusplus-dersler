#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    //lambda function

    //[] : chapter list distan bir variable yakalamak icin
    //() : fonksiyonlardaki gibi parametre almak icin
    auto merhaba=[]()
    {
        cout<<"Yeni bir sey geldi"<<endl;
    };

    merhaba();

    []
    {
        cout<<"Kafayi yersin"<<endl;
    }();//bu sekilde otomatik olarak fonksiyon kendini cagirdi


    auto imparator=[](int a,int b)->int//kendisi nasil bir deger dondurecegini anliyor
                   //ama biz yine de manuel olarak veri tipini belirtmek istersek bu sekilde yapiyoruz
    {
        return a+b;
    };

    int sonuc=imparator(45,72);

    cout<<sonuc<<endl;

    int x=15;

    auto carp=[x](int b)->int
    {
        return x*b;
    };

    cout<<carp(5)<<endl;//tek degisken gonderiyoruz cunku digerini zaten fonksiyon aldi

    auto deger_arttir=[&x]()//referans kullanma
    {
        x++;
    };
    deger_arttir();

    cout<<x<<endl;

    //bundan sonrasi vektor konusuna giriyor

    vector<int> vektor= {1,2,3,4,5,6,7,8,9,10};

    for_each(vektor.begin(),vektor.end(),[](int &n)
    {
        n*=2;//2 ile carpa carpa degerleri degistiriyor
    });

    cout<<"Yeni vektor elemanlari : ";

    for(int &n:vektor)//for'u 'for_each' gibi kullanabiliyoruz
           cout<<n<<" ";

    cout<<endl;










    return 0;
}
