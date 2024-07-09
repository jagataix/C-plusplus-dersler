#include <iostream>
#include <string>

using namespace std;

class mat
{
public:
    int sayi1,sayi2;
    mat(int a,int b)
    {
        sayi1=a;
        sayi2=b;
    }

    int topla()
    {
        return sayi1+sayi2;
    }
    int cikar()
    {
        return sayi1-sayi2;
    }
    int bol()
    {
        return sayi1/sayi2;
    }
    int carp()
    {
        return sayi1*sayi2;
    }
    int mod()
    {
        return sayi1%sayi2;
    }


    void yazdir()//daha kisadan bu sekilde yazdirilabilir
    {
        cout<<topla()<<endl;
        cout<<cikar()<<endl;
        cout<<bol()<<endl;
        cout<<carp()<<endl;
        cout<<mod()<<endl<<endl;
    }

};

int main()
{
    mat nesne(60,15);

    mat nesne2(52,24);

    nesne.yazdir();

    nesne2.yazdir();



    return 0;
}
