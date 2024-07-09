#include <iostream>


using namespace std;


int main()
{
    int sayi,i=1,en_kucuk=INT_MAX,en_buyuk=INT_MIN;

    cout<<INT_MAX<<"\n";//veri tipinin alabilecegi max ve min degerlere ulasabiliriz
    cout<<INT_MIN<<"\n";

    do
    {
        cout<<i<<"th sayi:";
        cin>>sayi;
        if(sayi==0) break;

        if(sayi<en_kucuk)
            en_kucuk=sayi;
        if(sayi>en_buyuk)
            en_buyuk=sayi;

        i++;
    }
    while(sayi!=0);

    cout<<"En buyuk sayi: "<<en_buyuk<<endl;
    cout<<"En kucuk sayi: "<<en_kucuk;



    return 0;
}
