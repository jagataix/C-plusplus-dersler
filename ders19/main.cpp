#include <iostream>




using namespace std;



int main()
{

    char harf;
    cout<<"Bir harf giriniz: ";
    cin>>harf;

    if((harf >='A') && (harf<='Z'))
    {
        cout<<harf<<" bir buyuk harftir"<<endl;
    }
    else if((harf >='a') && (harf<='z'))
    {
        cout<<harf<<" bir kucuk harftir"<<endl;
    }
    else
    {
        cout<<harf<<" bir harf degildir"<<endl;
    }


    return 0;
}
