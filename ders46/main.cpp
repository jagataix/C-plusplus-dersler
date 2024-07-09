#include <iostream>
#include <string>

using namespace std;


int main()
{
    //iterator

    string cumle="Inanilmaz birsey bu aga";

    for(string::iterator it=cumle.begin(); it!=cumle.end(); it++)
        cout<<*it;//nesne yonelimli programalamaya yonelik komutlar

    cout<<"\n\n";

    string cumle2="nabiyon len";

    for(string::reverse_iterator it2=cumle2.rbegin(); it2!=cumle2.rend(); it2++)
        cout<<*it2;

    cout<<"\n\n";

    string cumle3="iyice deli ettin kendini sen";

    for(auto it3=cumle3.cbegin(); it3!=cumle3.cend(); it3++)
        cout<<*it3;

    cout<<"\n\n";

    string cumle4="oha bunu tersten yazacakmis";

    for(auto it4=cumle4.crbegin(); it4!=cumle4.crend(); it4++)
        cout<<*it4;

    cout<<"\n\n";

    string ad="Suanda hersey cok citirinda hersey gidiyor";

    string ad2=ad.substr(18,9);

    int a=ad.find("hersey");

    string ad3=ad.substr(a,12);

    cout<<ad<<endl;
    cout<<"\""<<ad2<<"\"\n"<<endl;
    cout<<ad3<<endl;

     cout<<"\n\n";

    string sifre="Edirne";
    string girilen;

    cout<<"Sifreyi giriniz : ";
    getline(cin,girilen);

    if(sifre.compare(girilen)==0)
        cout<<"Sifre dogru!"<<endl;
    else
        cout<<"Sifre dogru degil!"<<endl;



    return 0;
}
