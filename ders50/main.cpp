#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    float x,y,a,sonuc;

    x=45.5;
    y=12.6;

    cout<<max(x,y)<<endl;
    cout<<max(x,y)<<endl;

    sonuc=exp(x);//euler ustel fonk
    cout<<sonuc<<endl;

    sonuc=log(x);
    cout<<sonuc<<endl;

    sonuc=pow(3,4);
    cout<<sonuc<<endl;

    sonuc=sqrt(49);
    cout<<sonuc<<endl;

    sonuc=cbrt(729);//kupkok
    cout<<sonuc<<endl;

    sonuc=hypot(5,12);
    cout<<sonuc<<endl;

    cout<<"\n";

    cout<<ceil(3.5)<<endl;//her zaman ust sayiya yuvarlar
    cout<<ceil(3.1)<<endl;
    cout<<ceil(-4.5)<<endl;
    cout<<ceil(-8.1)<<endl;

    cout<<"\n";

    cout<<floor(3.5)<<endl;//her zaman alt sayiya yuvarlar
    cout<<floor(3.1)<<endl;
    cout<<floor(-4.5)<<endl;
    cout<<floor(-8.1)<<endl;

    cout<<"\n";

    cout<<round(3.5)<<endl;//yakin sayiya yuvarlar
    cout<<round(3.1)<<endl;
    cout<<round(-4.5)<<endl;
    cout<<round(-8.1)<<endl;

    cout<<"\n";

    cout<<copysign(23,-5)<<endl;//birincinin degeri ikincinin isaretini alir
    cout<<copysign(-23,5)<<endl;
    cout<<copysign(-23,-5)<<endl;

    cout<<"\n";

    cout<<abs(-34.8)<<endl;





    return 0;
}
