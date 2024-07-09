#include <iostream>





using namespace std;



int main()
{
    // "C" deki gibi toplama cikarma carpöa bolme modul islemleri yapilabiliyoruz

    // ++x ilk once arttir sonra kullan

    // x++ ilk once kullan sonra arttir

    int x=7, y=2, z=4;
    x++;    //x=8 y=2 z=4
    ++y;    //x=8 y=3 z=4
    z--;    //x=8 y=2 z=3
    x=y++;  //x=3 y=4 z=3
    z=++x;  //x=4 y=4 z=4
    z=y--;  //x=4 y=3 z=4
    z=--y;  //x=4 y=2 z=2

    cout<<"x:"<<x<<"\n";//4
    cout<<"y:"<<y<<"\n";//2
    cout<<"z:"<<z<<"\n";//2


    return 0;
}
