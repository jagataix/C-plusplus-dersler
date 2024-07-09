#include <iostream>



using namespace std;


int main()
{
    short int matris_a[3][3]=
    {
        {1,3,4},
        {2,1,2},
        {3,1,1}
    };

    short int matris_b[3][3]=
    {
        {1,2,2},
        {3,1,2},
        {1,2,3}
    };

    short int matris_c[3][3]
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    cout<<"Ilk Matris : "<<endl;

    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<3; j++)
            cout<<"  "<<matris_a[i][j]<<"  ";
        cout<<endl<<endl;
    }

    cout<<endl<<"-----------------------------------"<<endl;

    cout<<"Ikinci Matris : "<<endl;

    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<3; j++)
            cout<<"  "<<matris_b[i][j]<<"  ";
        cout<<endl<<endl;
    }

    cout<<endl<<"-----------------------------------"<<endl;

    cout<<"Sonuc Matrisi : "<<endl;



    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<3; j++)
        {
            for(short int k=0; k<3; k++)
                matris_c[i][j]+=matris_a[i][k]* matris_b[k][j];
        }
    }

    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<3; j++)
            cout<<"  "<<matris_c[i][j]<<"  ";
        cout<<endl<<endl;
    }





    return 0;
}
