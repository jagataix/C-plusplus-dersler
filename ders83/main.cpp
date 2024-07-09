#include <iostream>
#include <string>

using namespace std;


void yazdir()
{
    int a=3;//bu degisken fonksiyon bitince bellekten siliniyor
    a+=18;
    cout<<"a : "<<a<<endl;
}
void yazdir2()
{
    static int b=8;//static variable
    b+=16;
    cout<<"b : "<<b<<endl;
}

class isci
{
public:
    static int adamlar;//static attribute

    static void bilgileri_goster(string ad,int maas)//static method
    {
        cout<<"Iscinin ismi  : "<<ad<<endl;
        cout<<"Iscinin maasi : "<<maas<<endl<<endl;
    }

    isci()
    {
        adamlar++;
    }
};

int isci::adamlar=0;//baslangic degerini tanimlamayi class ve main'in disinda yaptik


int main()
{
    yazdir();
    yazdir();
    //cout<<a; bu kod hata verir cunku bulamaz

    yazdir2();//24 deger her defasinda degisiyor
    yazdir2();//40
    yazdir2();//56

    cout<<endl<<endl;

    isci kisi1,kisi2,kisi3,kisi4;
    cout<<"Iscilerin sayisi "<<isci::adamlar<<endl<<endl;//static attribute'e bu sekilde erisebiliyoruz

    kisi1.bilgileri_goster("Ahmet",74399);
    kisi3.bilgileri_goster("Ali",58946);

    isci::bilgileri_goster("Yasin",98742);//hic nesne olusturmadan methoda ulastik

    return 0;
}
