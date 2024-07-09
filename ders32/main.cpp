#include <iostream>


using namespace std;


int main()
{
    int sayi,ilk=1,ikinci=1,ucuncu;
    cout<<"Fibonacci serisinin ilk kac elemani yazilsin?:";
    cin>>sayi;
    cout<<"1 1 ";

    for(short int i=1;i<=sayi-2;i++)
    {
        ucuncu=ilk+ikinci;
        ilk=ikinci;
        ikinci=ucuncu;
        cout<<ucuncu<<" ";
    }


    return 0;
}
