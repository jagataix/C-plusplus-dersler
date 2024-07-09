#include <iostream>


using namespace std;


int main()
{
    int matris[5][5];

    for(short int i=0;i<5;i++)
    {
        for(short int j=0;j<5;j++)
            matris[i][j]=i+j;
    }

    for(short int i=0;i<5;i++)
    {
        for(short int j=0;j<5;j++)
            cout<<matris[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl<<endl;

    int  toplam,matris2[5][5]=
    {
        {5,8,2,8,9},
        {1,7,15,7,4},
        {10,4,3,0,1},
        {2,18,6,12,1},
        {6,9,4,11,19},
    };

    for(short int i=0;i<5;i++)
    {
        for(short int j=0;j<5;j++)
            cout<<" "<<matris2[i][j]<<"  ";
        cout<<endl<<endl;
    }

    cout<<endl<<endl;

    for(short int i=0;i<5;i++)
    {
        toplam=0;
        for(short int j=0;j<5;j++)
            toplam+=matris2[i][j];
        cout<<i+1<<". satirin toplami : "<<toplam<<endl;
    }

    cout<<endl;

    for(short int i=0;i<5;i++)
    {
        toplam=0;
        for(short int j=0;j<5;j++)
            toplam+=matris2[j][i];
        cout<<i+1<<". sutunun toplami : "<<toplam<<endl;
    }





    return 0;
}
