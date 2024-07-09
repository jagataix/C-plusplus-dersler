#include <iostream>




using namespace std;




int main()
{
    char islem;
    float x,y;

    cout<<"Isleaminizi seciniz: ";
    cin>>islem;

    cout<<"Iki sayi giriniz: ";
    cin>>x>>y;

    switch(islem)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        if(y==0)
        {
            cout<<"Ikinci sayi 0 olamaz!";
        }
        else
        {
            cout<<x/y;
        }

        break;

    }



    return 0;
}
