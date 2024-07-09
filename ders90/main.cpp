#include <iostream>
#include <string>

using namespace std;

template<typename X>//sablon olusturduk
void degistir(X&a,X&b)//turlere kendi karar veriyor
{
    X c=a;
    a=b;
    b=c;
}

int arttir(int k)
{
    return k+5;
}
double arttir(double k)//butun variable'lar icin ayri olusturmak zorundaydik
{
    //cunku ondalik degerler girdigimizde bize yine tamsayi degerler donduruyordu
    return k+5;
}

template<class A>//class sablonu

class isci
{
public:
    A degisken;//ture kendisi karar vermesi icin boyle yaptik
    isci(A P)
    {
        this->degisken=P;
    }
};





int main()
{

    cout<<arttir(6)<<endl;
    cout<<arttir(8.53)<<endl;

    int t=5;
    int l=72;
    float s=3662.72;
    float r=235.26;
    char harf1='C';
    char harf2='E';

    cout<<t<<"\t"<<l<<endl;
    degistir(t,l);
    cout<<t<<"\t"<<l<<endl<<endl;

    cout<<s<<"\t"<<r<<endl;
    degistir(s,r);//nasil bir degisken gonderirsek gonderelim onu kabul ediyor
    cout<<s<<"\t"<<r<<endl<<endl;

    cout<<harf1<<"\t"<<harf2<<endl;
    degistir(harf1,harf2);
    cout<<harf1<<"\t"<<harf2<<endl<<endl<<endl;

    isci<int> kisi1(64);//turunu bu sekilde belirtmemiz gerekiyor
    isci<char> kisi2('U');
    isci<double> kisi3(5.873);
    cout<<kisi1.degisken<<endl;
    cout<<kisi2.degisken<<endl;
    cout<<kisi3.degisken<<endl;

    return 0;
}
