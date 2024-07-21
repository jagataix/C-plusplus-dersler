#include <iostream>
#include <string>
#include <list>

using namespace std;




int main()
{
    list<int> liste1={35,6,32,42,46,32,48,12};//listemizi bu sekilde olusturuyoruz

    list<int> liste2={4,6,8,35,424,53,57};

    list<int> liste3={1,46,7,86,124,3};


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"push fronttan sonra"<<endl;

    liste1.push_front(14);//listemizin basına deger eklemek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"push backten sonra"<<endl;

    liste1.push_back(27);//listemizin sonuna deger eklemek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"front : "<<liste1.front()<<endl;//bastaki sayiyi gostermek icin kullaniyoruz
    cout<<"back  : "<<liste1.back()<<endl;//sondaki sayiyi gostermek icin kullaniyoruz

    cout<<"pop backten sonra"<<endl;

    liste1.pop_back();//listemizin sonunaki degeri silmek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"pop frontdan sonra"<<endl;

    liste1.pop_front();//listemizin sonunaki degeri silmek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"reverseden sonra"<<endl;

    liste1.reverse();//listemizin elemanlarinin yerlerini sondan basa sekilde degistirmek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"sorttan sonra"<<endl;

    liste1.sort();//listemizin elemanlarini kucukten buyuge siralamak icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"remove(32)dan sonra"<<endl;

    liste1.remove(32);//sectigimiz elemani listede kaç kere varsa hepsini silmek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"mergeden sonra"<<endl;

    liste1.merge(liste2);//listeleri birlestirmek icin kullaniyoruz


    for(auto i=liste1.begin();i!=liste1.end();i++)
        cout<<*i<<" ";

    cout<<endl;

    cout<<"splicedan sonra"<<endl;

    liste3.splice(liste3.end(),liste1);//listelerin istedigimiz yerine baska bir liste eklemek icin kullaniyoruz


    for(auto i=liste3.begin();i!=liste3.end();i++)
        cout<<*i<<" ";

    cout<<endl;





    return 0;
}
