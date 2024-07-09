#include <iostream>
#include <string>


using namespace std;

//dynamic data (heap) yazilimci mudahale edebilir
//program acik olsa da bellekte yer kaplamaz
//bellek alanini daha verimli kullanmak icin ihtiyac duyariz


//stack derleyici tarafindan kontrol edilir
//program acik oldugu muddetce bellekte yer kaplar

int main()
{
    int a=4;//stack

    int* b=new int;//heap

    *b=2;

    cout<<*b+8<<endl;
    delete b;//bellek alanini serbest biraktik



    int x;
    cout<<"Ogrenci sayisini giriniz : ";
    cin>>x;

    int* notlar=new int [x];


    cout<<"Notlari giriniz : ";
    for(short int i=0;i<x;i++)
       cin>>notlar[i];
    for(short int i=0;i<x;i++)
       cout<<i+1<<".NOT "<<notlar[i]<<endl;
    delete[] notlar;//dizinin kapladigi bellek alanini serbest birakiyoruz


    return 0;
}
