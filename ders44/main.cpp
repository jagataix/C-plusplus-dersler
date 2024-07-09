#include <iostream>


using namespace std;


int main()
{
    string cumle;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle);
    for(short int i=0; i<cumle.size(); i++)
    {
        if(islower(cumle[i]))
            cout<<cumle[i]<<" ";
    }

    cout<<"\n\n";

    string cumle2;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle2);
    for(short int i=0; i<cumle2.size(); i++)
    {
        if(isprint(cumle2[i]))//sadece yazdirilabilecek karakterler
            cout<<cumle2[i]<<" ";
    }
    //ispunct sadece noktalama isaretleri
    //isspace sadece bosluk

    cout<<"\n\n";

    string cumle3;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle3);
    for(short int i=0; i<cumle3.size(); i++)
    {
        if(isspace(cumle3[i]))
            cumle3[i]='\n';
    }
    cout<<cumle3<<endl;

    cout<<"\n\n";

    string cumle4;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle4);
    for(short int i=0; i<cumle4.size(); i++)
    {
         cout<<(char)toupper(cumle4[i]);
    }

    cout<<"\n";

    for(short int i=0; i<cumle4.size(); i++)
    {
         cout<<(char)tolower(cumle4[i]);
    }


    cout<<"\n\n";


    return 0;
}
