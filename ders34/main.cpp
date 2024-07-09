#include <iostream>

using namespace std;

//PASCAL UCGENI YAPMA

int main()
{
    int i,satir,z,j;
    cout<<"Bir sayi giriniz:";
    cin>>satir;

    for(i=0;i<satir;i++)
    {
        for(j=satir-i;j>0;j--)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
        {
            if(k==0)
                z=1;
            else
                z=z*(i-k+1)/k;

            cout<<z<<"   ";
        }
        cout<<"\n";
    }


    return 0;
}
