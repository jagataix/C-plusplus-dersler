#include <iostream>
#include <string>
#include <memory>


using namespace std;

class isci
{
    string no="HG89385";
public:
    string ad="Cagatay";
    int maas=15345;
    isci()
    {
        cout<<"Basladi"<<endl;
    }
    ~isci()
    {
        cout<<"Bitti"<<endl;
    }
    string no_yaz()
    {
        return no;
    }
};

class isci2
{
    string no="HG89385";
public:
    string ad="Cagatay";
    int maas=15345;
    isci2(string b)
    {
        cout<<"Basladi"<<endl;
        no=b;
    }
    ~isci2()
    {
        cout<<"Bitti"<<endl;
    }
    string no_yaz()
    {
        return no;
    }
};


int main()
{

    shared_ptr<isci> ptr=make_shared<isci>();//shared smart pointer

    auto ptr5=make_shared<isci>();//bu sekilde de atayabiliyoruz

    shared_ptr<isci> ptr2=ptr;

    auto ptr3=ptr;//bu sekilde de tanimlayabiliyoruz
    auto ptr4=ptr;

    cout<<"AD      : "<<ptr->ad<<endl;
    cout<<"MAAS    : "<<ptr->maas<<endl;
    cout<<"NO      : "<<ptr->no_yaz()<<endl;
    cout<<"ADRES   : "<<ptr.get()<<endl;//class'in hazir kendi methodunu cagiriyoruz
    //bellekteki adresi bu sekilde gorebiliyoruz
    cout<<"SAYI    : "<<ptr.use_count()<<endl<<endl<<endl;//bu nesneyi gosteren kac pointer varsa onun sayisini yazdirir


    shared_ptr<int> sP=make_shared<int>(6);
    weak_ptr<int> wP=sP;//weak smart pointer




    if(!wP.expired())//suresi gecmis mi degil mi onu kontrol edecegiz
    {
        cout<<*wP.lock()<<endl;//hazir fonksiyon
        //weak pointer'a bu sekilde yazdirabiliriz
    }
    sP.reset();//hazir fonksiyon
    //pointer'i bu sekilde sildik

    shared_ptr<isci2> sX=make_shared<isci2>("KF84956");
    weak_ptr<isci2> wX=sX;

    if(!wX.expired())
    {
        cout<<(*wX.lock()).no_yaz()<<endl;//weak pointer uzerinden class'imizdaki degeri yazdirdik

    }
    sX.reset();

    return 0;
}
