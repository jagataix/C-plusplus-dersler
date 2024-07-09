#include <iostream>
#include <string>



using namespace std;



int main()
{
    int b=12;

    int* ptr=&b;

    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl<<endl;

    string yemek="Lahmacun";

    string* ptr2=&yemek;

    cout<<yemek<<endl;
    cout<<&yemek<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl<<endl;

    *ptr2="Kokoric";

    cout<<yemek<<endl;
    cout<<&yemek<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;


    return 0;
}
