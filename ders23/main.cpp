#include <iostream>



using namespace std;



int main()
{
    short int i,j;

    //nested loops(Ic ice donguler)

    for(i=1; i<=20; i+=2)
    {
        cout<<"Dis dongu:"<<i<<"\n";
        for(j=1; j<=5; j++)
            cout<<"\tIc dongu:"<<j<<"\n";
    }
    cout<<"\n\n\n";

    short int sayilar[5]={4,76,1,92,0};
    for(int i:sayilar)
    {
        cout<<i<<"\t";
    }
    cout<<"\n\n\n";


    return 0;
}
