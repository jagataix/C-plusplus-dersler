#include <iostream>



using namespace std;



int main()
{
    int boyut;
    cout<<"Boyutu giriniz : ";
    cin>>boyut;
    int* dizi=new int[boyut];//nesne olusturuyoruz



    for(short int i=0;i<boyut;i++)
    {
        cout<<"dizi["<<i<<"] : ";
        cin>>dizi[i];
    }
    for(short int i=0;i<boyut;i++)
    {

        cout<<*(dizi+i)<<" ";
    }
    delete[]dizi;//temizliyoruz
    dizi=NULL;


    return 0;
}
