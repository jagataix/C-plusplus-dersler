#include <iostream>


using namespace std;


int main()
{
    string cumle;
    cout<<"Bir cumle giriniz : ";
    getline(cin,cumle);
    if(!cumle.empty())//stringin bos olup olmadigini kontrol ediyoruz
        cout<<"Yazdigin cumle : "<<cumle<<endl;
    else
        cout<<"Bir sey yazmadin"<<endl;

    string ad1,ad2,ad3,en_buyuk;
    ad1="Adamsin";
    ad2="Adamsin be abi";
    ad3="Adamsin ustad";

    if((ad1>ad2) && (ad1>ad3))//ASCII tabloda hangisinin degeri daha buyukse o stringi daha buyuk kabul ediyor
        en_buyuk=ad1;//karakter indislerini sirasiyla karsilastiriyor
    else if((ad2>ad1) && (ad2>ad3))
        en_buyuk=ad2;
    else
        en_buyuk=ad3;

    cout<<en_buyuk<<endl;

    string deneme(3,'C');//bu sekilde de sayiyla harf yazdirabiliyoruz

    cout<<deneme<<endl;




    return 0;
}
