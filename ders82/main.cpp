#include <iostream>
#include <string>

using namespace std;

class isci
{
private:
    string ad;
    int maas;
public:
    void maas_al(int a)
    {
        maas=a;
    }
    void ad_al(string b)
    {
        ad=b;
    }
    int maasi_yaz()
    {
        return maas;
    }
    string adi_yaz()
    {
        return ad;
    }

};

class isci2
{
private:
    string ad;
    int maas;
public:
    isci2(string x,int y)
    {
        ad=x;
        maas=y;
    }
    void maas_al(int a)
    {
        maas=a;
    }
    void ad_al(string b)
    {
        ad=b;
    }
    int maasi_yaz()
    {
        return maas;
    }
    string adi_yaz()
    {
        return ad;
    }

};

class isci3
{
public:
    string* ad;//pointer yaparsak
    int* maas;

    isci3(string x,int y)
    {
        ad=new string;//turunu belirtiyoruz
        maas=new int;
        *ad=x;//adres icerigine ulastik
        *maas=y;
    }
    ~isci3()//isimiz bitince bellegi bosaltmak icin
    {
        //bellek sizintisi yani fazla yer harcama soz konusu
        delete ad;//kullandiktan sonra hafizadan siliyoruz
        delete maas;
    }
    void bilgileri_goster()
    {
        cout<<"ADI   : "<<*ad<<endl;
        cout<<"MAASI : "<<*maas<<endl<<endl;
    }
};

void nesne_al(isci2* c)
{
    cout<<"ADI   : "<<c->adi_yaz()<<endl;
    cout<<"MAASI : "<<c->maasi_yaz()<<endl<<endl;
}


int main()
{
    isci* kisi=new isci();//yeni bir pointer nesnesi olusturuyoruz

    kisi->ad_al("Cagatay");
    kisi->maas_al(439675);
    cout<<"ADI   : "<<kisi->adi_yaz()<<endl;
    cout<<"MAASI : "<<kisi->maasi_yaz()<<endl<<endl;

    isci2 kisi2("Aynur",78492);
    nesne_al(&kisi2);

    isci3* kisi3=new isci3("Mehmet",74234);

    kisi3->bilgileri_goster();
    delete kisi3;//nesneyi de silmemiz gerekiyor
    return 0;
}
