#include <iostream>



using namespace std;



int main()
{

    short int sayi,i,j,kontrol=1;

    cout<<"Bir sayi giriniz:";
    cin>>sayi;

    for(i=2; i<=sayi; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                kontrol=0;
                break;
            }
            else
            {
                kontrol=1;
            }
        }
        if(kontrol)
        {
            cout<<i<<" ";
        }
    }


    return 0;
}
