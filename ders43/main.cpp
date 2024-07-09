#include <iostream>
#include <string>
#include <cctype>
#include <cstring>


using namespace std;


int main()
{
    char karakter;

    cout<<"Bir harf giriniz : ";
    cin>>karakter;

    if(isalnum(karakter))
        cout<<"Bir harf ya da sayi girdiniz."<<endl;
    else
        cout<<"Bir harf ya da sayi girmediniz."<<endl;


    string cumle;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle);
    for(int i=0; i<cumle.size(); i++)
    {
        if(isalnum(cumle[i]))
            cout<<cumle[i]<<" ";
    }
    cout<<"\n\n";

    char cumle2[] = "Cagatay\n Altintopac\n";
    short int i=0;

    while(!iscntrl(cumle2[i]))
    {
        cout<<cumle2[i];
        i++;
    }

    cout<<"\n\n";

    string cumle3;

    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle3);
    for(int i=0; i<cumle3.size(); i++)
    {
        if(isalpha(cumle3[i]))
            cout<<cumle3[i];
    }

    //isdigit sadece sayi
    //isgraph bosluk disinda herhangi birsey
    //isblank sadece bosluk

    cout<<"\n\n";

    char cumle4[]="Merhaba, nasil 45 gidiyor gardes";
    short int sayi=0;

    for(short int i=0; i<=strlen(cumle4);i++)
    {
        if(isblank(cumle4[i]))
            sayi++;


    }
    cout<<sayi<<" adet bosluk var."<<endl;





    return 0;
}
