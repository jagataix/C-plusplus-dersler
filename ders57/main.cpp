#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>


using namespace std;


int main()
{
    int zar,sayilar[7]={0,0,0,0,0,0,0};

    srand(time(NULL));

    for(short int i=0;i<100;i++)
    {
         zar=rand()%6+1;
         sayilar[zar]++;
    }

    for(short int i=1;i<7;i++)
    {

         cout<<"sayilar["<<i<<"] = "<<sayilar[i]<<endl;
    }

    return 0;
}
