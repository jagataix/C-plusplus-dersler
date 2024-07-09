#include <iostream>



using namespace std;



int main()
{
    short int sayi,i=1;

    do
    {
        i=1;
        cout<<"Bir sayi giriniz:";
        cin>>sayi;
        if(sayi<1 || sayi>50)
            break;
        while(i<=sayi)
        {
            cout<<i<<" ";
            i++;
        }

        cout<<"\n";
    }
    while(sayi>=1 && sayi<=50);



    return 0;
}
