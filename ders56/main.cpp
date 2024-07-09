#include <iostream>
#include <string>


using namespace std;


int main()
{
    double deger,sayilar[11];
    int indis,secim;

    do
    {
        cout<<"Bir secim yap(cikis icin -1)"<<endl;
        cout<<"\t1. Diziye yaz"<<endl;
        cout<<"\t2. Diziden oku"<<endl;
        cout<<"Secim : ";
        cin>>secim;

        if(secim==-1) break;
        if(secim!=1 && secim!=2)
        {
            cout<<"Lutfen seceneklere bir daha bak!"<<endl;
            continue;
        }
        cout<<"Dizinin indisini giriniz : ";
        cin>>indis;

        if(indis<0 || indis>10)
        {
            cout<<"0 ile 10 arasinda bir deger girmelisiniz!"<<endl;
            continue;
        }


        switch(secim)
        {
        case 1 :
            cout<<"Indise yazilacak degeri giriniz : ";
            cin>>sayilar[indis];
            cout<<"Yazma islemi basarili!"<<endl<<endl;
            break;

        case 2 :
            cout<<"sayilar["<<indis<<"] = "<<sayilar[indis]<<endl;
            break;
        }
    }
    while(secim!=-1);

    return 0;
}
