#include <iostream>
#include <string>

using namespace std;


int main()
{
    string arabalar[]= {"Fiat","Volvo","Renault","Porsche"};

    for(string benim_arabalar:arabalar)
        cout<<benim_arabalar<<endl;


    cout<<endl;

    int sayilar[5]= {45,28,56,82,28};

    int boyut=sizeof(sayilar)/sizeof(int);

    cout<<sizeof(sayilar)<<endl;

    cout<<boyut<<endl<<endl;

    for(short int i=0; i<boyut; i++)
        cout<<sayilar[i]<<" ";

    string mesaj[2][4]=//2 boyutlu dizi ornek
    {
        {"A","B","C","D"},
        {"X","Y","Z","T"}
    };


    string mesaj2[2][2][2]=//3 boyutlu dizi ornek
    {
        {
            {"A","B"},
            {"C","D"}
        },
        {
            {"X","Y"},
            {"Z","T"}
        }
    };
    return 0;
}
