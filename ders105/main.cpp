#include <iostream>


#pragma once//birden fazla kez ayni kutuphaneyi cagirirsak derleyicinin bir kere cagirmis gibi kabul etmesi icin kullaniyoruz

#include <string>
#include <string>
#include <string>

#define maksimum 100
#define minimum 20


using namespace std;

int topla(int,int);

int main()
{
    cout<<topla(45,82)<<endl<<endl;//diger .cpp'den islemi alabiliyoruz

    #if maksimum>120
          cout<<"Bunu yazma"<<endl<<endl;
    #elif mimimum<120
          cout<<"Bunu yaz"<<endl<<endl;
    #endif // maksimum

    cout<<__LINE__<<endl;//satir numarasini veriyor
    cout<<__FILE__<<endl;//dosya ismini veriyor
    cout<<__DATE__<<endl;//tarihi veriyor
    cout<<__TIME__<<endl;//zamani veriyor


    return 0;
}
