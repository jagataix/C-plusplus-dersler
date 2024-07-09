#include <iostream>
#include <string>


using namespace std;

class isci
{
private:
    string ad;
    int maas;
public:
    isci(string ad,int maas)
    {
        this->ad=ad;
        this->maas=maas;
    }
    friend void yazdir(isci x);//friend function
    //private bilgilere erisebilmesi icin izin veriyoruz
    friend class calisanlar;//friend class
    //private bilgilere baska bir class'da ulasilmasina izin veriyoruz
};

class calisanlar
{
public:
    void yazdir2(isci y)
    {
        cout<<"ADI    : "<<y.ad<<endl;
        cout<<"MAASI  : "<<y.maas<<endl;
    }
};

void yazdir(isci x)
{
    cout<<"ADI    : "<<x.ad<<endl;
    cout<<"MAASI  : "<<x.maas<<endl;
}

int main()
{
    isci kisi1("Ahmet",73956);

    calisanlar adam;

    adam.yazdir2(kisi1);

    yazdir(kisi1);

    return 0;
}
