#include <iostream>



using namespace std;

void dizim(int*,int);

int main()
{
    int sayilar[8]={3,2,15,4,6,26,7,9};

    cout<<&sayilar[0]<<endl;
    cout<<sayilar<<endl<<endl;

       for(short int i=0;i<8;i++)
           cout<<sayilar[i]<<" ";

    cout<<endl;
       for(short int i=0;i<8;i++)
           cout<<*(sayilar+i)<<" ";

    cout<<endl<<endl;
       for(short int i=0;i<8;i++)
           cout<<sayilar+i<<" ";

    cout<<endl;
       for(short int i=0;i<8;i++)
           cout<<&sayilar[i]<<" ";

    cout<<endl<<endl;

    char harfler[10]={'A','B','C','D','E','F','G','H','I','J'};

    for(short int i=0;i<sizeof(harfler);i++)
           cout<<harfler[i]<<" ";

    cout<<endl<<endl;

    for(short int i=0;i<sizeof(harfler);i++)
           cout<<*(harfler+i)<<" ";

    cout<<endl<<endl;

    int sayilar2[6]={5,3,7,9,2,8};

    for(short int i=0;i<sizeof(sayilar2)/sizeof(sayilar2[0]);i++)
           cout<<sayilar2[i]<<" ";

    cout<<endl<<endl;

    dizim(sayilar2,sizeof(sayilar2)/sizeof(sayilar2[0]));

    for(short int i=0;i<sizeof(sayilar2)/sizeof(sayilar2[0]);i++)
           cout<<sayilar2[i]<<" ";

     cout<<endl<<endl;


    return 0;
}

void dizim(int* x,int y)
{
    for(short int i=0;i<y;i++)
       *(x+i)*=4;
}
