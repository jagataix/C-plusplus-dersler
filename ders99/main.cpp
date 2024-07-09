#include <iostream>
#include <string>
#include <memory>//smart pointer komutlari burada tanimli bunu eklememiz gerekli


using namespace std;

//smart pointers


class isci
{
public:
    string ad="Cagatay";
    int maas=15000;
    isci()
    {
        cout<<"Basladi"<<endl;
    }
    ~isci()
    {
        cout<<"Bitti"<<endl;
    }
};





int main()
{
    int* ptr=new int[9];

    int sayi,i,j=14;

    cout<<"10'dan kucuk bir sayi giriniz : ";
    cin>>sayi;
    try
    {
        if(sayi<=10)
        {
            cout<<"Dogru"<<endl;
            for(i=0;i<9;i++,j++)
            {
                ptr[i]=j;
            }
            delete[] ptr;//if'in icine girmezsek ptr'miz silinmeyecek ve bellek sizintisi olacak
            ptr=nullptr;//delete'i bazen yanlis yerde yapabiliriz
        }
        else
        {
            throw 707;
        }
    }
    catch(int z)
    {
        cout<<"Hata! Lutfen 10'dan kucuk bir sayi giriniz."<<endl<<endl;
    }

    unique_ptr<int> ptr2=make_unique<int>(3);//unique smart pointer

    unique_ptr<int> ptr3=move(ptr2);//bu sekilde baska bir smart pointer'a degeri tasiyabiliyoruz

    //degerleri kopyalayamiyoruz
    //tasidigimiz zaman eski pointer'in ici bosaldi
    //cout<<*ptr2<<endl;

    cout<<*ptr3<<endl;

    //kendisi pointer'in isi bittikten sonra pointer'i siliyor

    unique_ptr<isci> ptr4=make_unique<isci>();//classlar icin smart pointer tanimlamasi bu sekilde






    return 0;
}
