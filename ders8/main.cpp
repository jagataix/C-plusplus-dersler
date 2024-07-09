#include <iostream>




using namespace std;



int main()
{
    int sayi;
    cout<<"Bir sayi giriniz:";
    cin>>sayi;//kullanýcýdan girdiyi bu sekilde aliyoruz

    cout<<"Girdiginiz sayi:"<<sayi<<"\n\n";

    int a,b,toplam;

    cout<<"Birinci sayiyi giriniz:";
    cin>>a;
    cout<<"IKinci sayiyi giriniz:";
    cin>>b;

    toplam=a+b;

    cout<<"Girdiginiz sayilarin toplami:"<<a+b<<"\n\n";

    const float PI=3.1415;
    float r,alan,cevre;

    cout<<"Dairenin yaricapi giriniz:";
    cin>>r;

    alan=r*r*PI;
    cevre=2*r*PI;

    cout<<"Dairenin alani:"<<alan<<"\n\n"<<"Dairenin cevresi:"<<cevre<<endl;


    string cumlem;

    cout<<"\n\nBir cumle yaziniz:";

    //[cin>>cumlem;] boyle yazdirirsak bosluktan sonrasini okumayacak

    getline(cin,cumlem);//bunu kullanarak bosluktan sonrasini da okutabildik




    cout<<"\nYazdiginiz cumle:"<<cumlem<<endl;

    char cumlem2[100];

    cout<<"\n\nBir cumle yaziniz:";
    cin.getline(cumlem2,sizeof(cumlem2));

    cout<<"\nYazdiginiz cumle:"<<cumlem2<<endl;


    return 0;
}
