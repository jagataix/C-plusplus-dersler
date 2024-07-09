#include <iostream>



using namespace std;



int main()
{

    int sayi;

    cout<<"Bir sayi giriniz:";
    cin>>sayi;

    if(sayi>0)
    {
        cout<<"Pozitif bir sayi girdiniz\n\n\n";
    }
    else if(sayi<0)
    {
        cout<<"Negatif bir sayi girdiniz\n\n\n";
    }
    else
    {
        cout<<"Sayi notr\n\n\n";
    }

    int sayi2;
    string sonuc;

    cout<<"Bir sayi giriniz:";
    cin>>sayi2;

    sonuc=(sayi2>0)? "Pozitif":"Negatif ya da Notr";//kisa kosullama ifadesi

    cout<<sonuc;



    return 0;
}
