#include <iostream>
#include <string>

#define PI 3.14159

#define kaldir 536

#define Dizi_boyut 5

#define P cout

#define dongu(i,j) for(i=1;i<=j;i++)

#define topla(a,b) (a+b)

#define buyuk(a,b) ((a)>(b) ? (a) : (b))//makro

using namespace std;



//preprocessor(onislemci komutlari)


int main()
{
    P<<PI<<endl;

    for(short int i=0; i<Dizi_boyut; i++)
    {
        P<<i+1<<" ";
    }

    P<<endl;

    int a,b;

    P<<"Bir sayi gir : ";
    cin>>b;


    dongu(a,b)
    P<<a<<"'nin karesi : "<<a*a<<endl;

    P<<endl;

    P<<topla(65,12)<<endl;

    P<<buyuk(57,82)<<endl;

    P<<kaldir<<endl;


#undef kaldir

    #ifdef PI
    int r;
    P<<"Yaricapi gir   : ";
    cin>>r;
    P<<"Dairenin alani : "<<r*r*PI<<endl;
    #endif // PI

    #ifdef za
    P<<"bunu yaz"<<endl;
    #endif // za

    #ifndef za
    P<<"bunu yaz o zaman"<<endl;
    #endif // za

    #if 37<82
    P<<"37 82'den kucuktur"<<endl;
    #endif // 37

    #if 27<16
    P<<"27 16'dan kucuktur"<<endl;
    #endif // 27


    return 0;
}
