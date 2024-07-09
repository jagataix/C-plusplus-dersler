#include <iostream>



using namespace std;



int main()
{
    char harf;
    cout<<"Bir harf giriniz: ";
    cin>>harf;

    switch(harf)
    {
    case 'a':
        cout<<"Sesli bir harf\n";
        break;
    case 'e':
        cout<<"Sesli bir harf\n";
        break;
    case 'u':
        cout<<"Sesli bir harf\n";
        break;
    case 'i':
        cout<<"Sesli bir harf\n";
        break;
    case 'o':
        cout<<"Sesli bir harf\n";
        break;
    default:
        cout<<"Sessiz bir harf\n";

    }

    return 0;
}
