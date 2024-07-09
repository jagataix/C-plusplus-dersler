#include <iostream>





using namespace std;



int main()
{
    int sayi;

    cout<<"Sayi gir:";
    cin>>sayi;
    if(sayi<0)
    {
        cout<<"Negatif sayi girmeseydin iyiydi\n";
    }
    else
    {
        if(sayi%2)
        {
            cout<<"Tek sayi\n";
        }
        else
        {
            cout<<"Cift sayi\n";
        }
    }





    return 0;
}
