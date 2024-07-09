#include <iostream>
#include <string>


using namespace std;


int main()
{
    string arabalar[6]= {"mercedes","togg","opel","peoguot","bmw","skoda"};

    int sayilar[4]= {65,92,6,2};

    cout<<arabalar[2]<<endl;

    arabalar[3]="toyota";

    cout<<arabalar[3]<<endl;

    cout<<sayilar[3]<<endl;

    cout<<*sayilar<<endl;

    cout<<endl<<endl;

    for(short int i=0; i<6; i++)
        cout<<arabalar[i]<<endl;

    cout<<endl<<endl;

    for(short int i:sayilar)
        cout<<i<<endl;




    return 0;
}
