#include <iostream>



using namespace std;



int main()
{
    short int sonuc=1,x;

    cout<<"Bir sayi giriniz:";
    cin>>x;
    if(x<0)
    {
        cout<<"Lutfen 0 ya da 0 dan buyuk bir deger giriniz\n";
    }
    else
    {
        for(short int i=1; i<=x; i++)
        {
            sonuc*=i;
        }
        cout<<x<<"!= "<<sonuc;
    }




    return 0;
}
