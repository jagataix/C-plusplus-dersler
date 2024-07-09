#include <iostream>


using namespace std;


int main()
{
    for(short int i=0; i<4; i++)
    {
        for(short int j=0; j<3; j++)
        {
            cout<<"Hello world ";
            if(j!=2)
                cout<<"- ";
        }
        cout<<"\n---------------------------------------\n";
    }



    return 0;
}
