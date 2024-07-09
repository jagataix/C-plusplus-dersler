#include <iostream>



using namespace std;




int main()
{
    short int i,j=1;
    //break

    for(i=1; i<10; i++)
    {
        if(i==6)
            break;

        cout<<i<<" ";
    }

    cout<<"\n\n";
    //aynisini while ile yazdik
    while(j<10)
    {


        if(j==6)
        {
            break;
        }
        cout<<j<<" ";
        j++;
    }
    cout<<"\n\n";

    for(i=1; i<10; i++)
    {
        if(i==6)
            continue;

        cout<<i<<" ";
    }

    cout<<"\n\n";



    return 0;
}
