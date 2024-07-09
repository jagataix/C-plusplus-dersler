#include <iostream>
#include <string>

using namespace std;

class telefon//abstract class //base-parent
{
public:
    //private yapamayiz
    int x=8;
    virtual void foto()=0;
    virtual void mesaj()=0;
    virtual void ara()=0;
};

class android:public telefon//derived-child
{
public:
    void foto()//bu fonksiyonlari tanimlamak zorundayiz yoksa main'de hata yeriz
    {
        cout<<"Android telefon fotosu"<<endl;
    }
    void mesaj()
    {
        cout<<"Android telefon mesaji"<<endl;
    }
    void ara()//
    {
        cout<<"Android telefon aramasi"<<endl;
    }
};

class IOS:public telefon//derived-child
{
public:
    void foto()
    {
        cout<<"Iphone telefon fotosu"<<endl;
    }
    void mesaj()
    {
        cout<<"Iphone telefon mesaji"<<endl;
    }
    void ara()
    {
        cout<<"Iphone telefon aramasi"<<endl;
    }
};

class harmonyOS:public telefon//derived-child
{
public:
    void foto()
    {
        cout<<"Huawei telefon fotosu"<<endl;
    }
    void mesaj()
    {
        cout<<"Huawei telefon mesaji"<<endl;
    }
    void ara()
    {
        cout<<"Huawei telefon aramasi"<<endl;
    }
};

int main()
{
    //telefon h;//abstract bir class oldugu icin nense olusturamiyoruz

    telefon* tel1=new android();//bu sekilde abstract class ile derived class'larimizi cagirabildik
    telefon* tel2=new IOS();
    telefon* tel3=new harmonyOS();

    tel1->foto();
    tel2->foto();
    tel3->foto();
    cout<<endl;
    tel1->mesaj();
    tel2->mesaj();
    tel3->mesaj();
    cout<<endl;
    tel1->ara();
    tel2->ara();
    tel3->ara();
    cout<<endl;


    return 0;
}
