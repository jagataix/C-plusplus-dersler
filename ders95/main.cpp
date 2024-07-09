#include <iostream>
#include <string>

using namespace std;

//exceptions (istisnalar)

int main()
{
    try//kodumuzda hata olabilme olasilgini var ise kullaniriz
    {
        int yas;
        cout<<"Yasini gir : ";
        cin>>yas;
        if(yas>=18)
            cout<<"Erisim saglandi,yetiskinsiniz"<<endl;
        else
            throw(yas);//catch'e deger gidiyor
        //bu deger istedigimiz herhangi birsey olabilir
    }
    catch(int hata)
    {
        cout<<"Erisim engellendi,erisim icin yasiniz 18'den fazla olmali"<<endl;
        cout<<"Yasiniz : "<<hata<<endl;
    }

    try
    {
        int yas;
        cout<<"Yasini gir : ";
        cin>>yas;
        if(yas>=18)
            cout<<"Erisim saglandi,yetiskinsiniz"<<endl;
        else
            throw 1;//bu sekilde de kullanabiliriz

    }
    catch(...)//uc nokta olmali
    {
        cout<<"Erisim engellendi,erisim icin yasiniz 18'den fazla olmali"<<endl;

    }

    try
    {
        float a,b;
        cout<<"a : ";
        cin>>a;
        cout<<"b : ";
        cin>>b;
        if(b==0)
            throw 1;
        else
            cout<<a/b<<endl;
    }
    catch(...)
    {
        cout<<"Bir sayi 0'a bolunemez!"<<endl;
    }







    return 0;
}
