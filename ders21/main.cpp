#include <iostream>



using namespace std;



int main()
{
    short int sayi=1;

    while(sayi!=0)
    {
        cout<<"Bir sayi giriniz:";
        cin>>sayi;

        if(sayi<0 || sayi>10)
        {
            cout<<"Lutfen 1 ile 10 arasinda bir sayi giriniz\n";
        }
        else
        {
            int i=1;
            while(i<=10 && sayi!=0)
            {
                cout<<sayi<<" X "<<i<<" = "<<sayi*i<<endl;
                i++;
            }
        }
    }


    return 0;
}
