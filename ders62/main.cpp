#include <iostream>



using namespace std;


int main()
{
    short int boyut;

    cout<<"Dizinin boyutunu giriniz : ";
    cin>>boyut;

    cout<<endl<<endl;

    short int matris[boyut][boyut];

    for(short int i=0;i<boyut;i++)
    {
        for(short int j=0;j<boyut;j++)
        {
            if(i==j)
                matris[i][j]=1;
            else if(i+j==boyut-1)
                matris[i][j]=1;
            else
                matris[i][j]=0;
        }

    }

     for(short int i=0;i<boyut;i++)
    {
        for(short int j=0;j<boyut;j++)
        cout<<"  "<<matris[i][j]<<"  ";

        cout<<endl<<endl;
    }

    return 0;
}
