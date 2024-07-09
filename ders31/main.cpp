#include <iostream>


using namespace std;


int main()
{
    short int sayi,x,y,ebob=1;

    cout<<"Iki sayi giriniz: ";
    cin>>x>>y;
    if(x<=0 || y<=0)
    {
        cout<<"0'dan buyuk degerler giriniz!\n";
    }
    else
    {
        if(x<y)
            sayi=x;
        else
            sayi=y;

        for(short int i=1; i<sayi; i++)
        {
            if(x%i==0 && y%i==0)
            {
                ebob=i;
            }
        }
        cout<<"Sayilarin EBOB'u : "<<ebob<<endl;
        cout<<"Sayilarin EKOK'u : "<<(x*y)/ebob;
    }



    return 0;
}
