#include <iostream>


using namespace std;


int main()
{
    int sayi,toplam;
    cout<<"Bir sayi giriniz:";
    cin>>sayi;
    for(int j=1; j<=sayi; j++)
    {
        toplam=0;

        for(int i=1; i<=j/2; i++)
        {
            if(j%i==0)
                toplam+=i;


        }
        if(toplam==j)
            cout<<j<<" bir mukemmel sayidir.\n";
    }




    return 0;
}
