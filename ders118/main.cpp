#include <iostream>
#include <string>
#include <vector>


using namespace std;



int main()
{
    vector<int> sayilar;

    sayilar.assign(6,8);//6 tane 8 degeri atiyoruz

    cout<<"1.(assign) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.push_back(16);//vektorun sonuna eleman ekliyor
    sayilar.push_back(37);

    cout<<"2.(push_back) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.pop_back();//sondaki elemani siliyor

    cout<<"3.(pop_back) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";
    cout<<endl<<"Son eleman : "<<sayilar[sayilar.size()-1];

    cout<<endl<<endl;

    sayilar.insert(sayilar.begin(),74);//sona yada basa eleman ekleme
    sayilar.insert(sayilar.begin(),39);
    sayilar.insert(sayilar.end(),83);

    cout<<"4.(insert) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.erase(sayilar.begin());//sondan ya da bastan eleman silme

    cout<<"5.(erase) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.emplace(sayilar.begin(),63);//insert gibi davraniyor
    sayilar.emplace(sayilar.end(),97);
    cout<<"6.(emplace) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.emplace_back(29);//sona eleman ekleme
    cout<<"7.(emplace_back) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl;

    sayilar.clear();//vektordeki tum elemanlari siler
    cout<<"8.(clear) vektor : ";
    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl<<endl<<endl;

    vector<int> sayilar2;

    sayilar.push_back(4);
    sayilar.push_back(17);
    sayilar2.push_back(19);
    sayilar2.push_back(8);

    cout<<"Swaptan once"<<endl;

    cout<<"Vektor 1 : ";

    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl;
    cout<<"Vektor 2 : ";

    for(short int i=0;i<sayilar2.size();i++)
        cout<<sayilar2[i]<<" ";

    cout<<endl;

    sayilar.swap(sayilar2);//vektordeki elemanlarin hepsini ikisi arasinda degistiriyor

    cout<<"Swaptan sonra"<<endl;

    cout<<"Vektor 1 : ";

    for(short int i=0;i<sayilar.size();i++)
        cout<<sayilar[i]<<" ";

    cout<<endl;
    cout<<"Vektor 2 : ";

    for(short int i=0;i<sayilar2.size();i++)
        cout<<sayilar2[i]<<" ";

    cout<<endl;




    return 0;
}
