#include <iostream>
#include <string>
#include <algorithm>//fonksiyonlar icin bu kutuphaneyi eklememiz gerekiyor


using namespace std;

void goster(int x[],int y)
{
    cout<<"Dizim : ";
    for(short int i=0;i<y;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int x[]={6,3,26,7,2,3,9};

    int boyut=sizeof(x)/sizeof(x[0]);

    goster(x,boyut);

    cout<<"Dizi duzenleniyor..."<<endl;
    sort(x,x+boyut);//elemanlari kucukten buyuge siralamak icin kullanabiliriz
    goster(x,boyut);
    cout<<"Aramadan sonra : "<<endl;
    if(binary_search(x,x+boyut,5))//dizide istedigimiz elemani aramak icin kullanabiliriz
        cout<<"5 elemani dizide var"<<endl;
    else
        cout<<"5 elemani dizide yok"<<endl;
    if(binary_search(x,x+boyut,3))
        cout<<"3 elemani dizide var"<<endl;
    else
        cout<<"3 elemani dizide yok"<<endl;



    return 0;
}
