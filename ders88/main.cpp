#include <iostream>
#include <string>
using namespace std;
#include "classlar/insanlar.h"
#include "classlar/ogrenciler.h"//miras almasi icin altta olmali



int main()
{
    //inharitance ile derli toplu bir kod yazdik ve gereksiz yazimini engelledik
    ogrenci kisi1("SYH589367","Cagatay","ALTINTOPAC",20);

    cout<<"NO     : "<<kisi1.no_ver()<<endl;
    cout<<"AD     : "<<kisi1.ad_ver()<<endl;
    cout<<"SOYAD  : "<<kisi1.soyad_ver()<<endl;
    cout<<"YAS    : "<<kisi1.yas_ver()<<endl;




    return 0;
}
