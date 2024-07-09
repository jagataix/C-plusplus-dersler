#include <iostream>
#include <string>

using namespace std;

struct araba
{
    string marka;
    string model;
    int yil;
};

void  goster(araba x)
{
    cout<<x.marka<<endl;
    cout<<x.model<<endl;
    cout<<x.yil<<endl<<endl;
}

void  goster2(araba* x)
{
    cout<<x->marka<<endl;
    cout<<x->model<<endl;
    cout<<x->yil<<endl<<endl;
}

typedef struct ustad
{
    int z;
}bune;//takma isim kullaniyoruz

struct isci
{
    string ad;
    string soyad;
    string gorev;
    int numara;
};

int main()
{
    araba a={"Mercedes","CLA500",7};
    araba* ptr=&a;

    cout<<ptr->marka<<endl;
    cout<<ptr->model<<endl;
    cout<<ptr->yil<<endl<<endl;

    goster(a);
    goster2(ptr);

    typedef int tamsayi;//bu sekilde degiskenlere farkli adlar verebiliyoruz
    typedef char karakter;


    tamsayi m=73;

    cout<<m<<endl;

    ustad g={85};

    cout<<g.z<<endl;

    bune la={746};

    cout<<la.z<<endl<<endl;

    isci kisiler[5];

    kisiler[0]={"adamd","jdpog","drgdgdf",4352};
    kisiler[1]={"awpdjamd","spfsjfpdf","fjffj",8546};
    kisiler[2]={"wspþkfs","owýrtyqweýr","cmböhksf",6933};

    for(short int i=0;i<3;i++)
    {
        cout<<"ad    : "<<kisiler[i].ad<<endl;
        cout<<"soyad : "<<kisiler[i].soyad<<endl;
        cout<<"gorev : "<<kisiler[i].gorev<<endl;
        cout<<"no    : "<<kisiler[i].numara<<endl<<endl;
    }


    return 0;
}
