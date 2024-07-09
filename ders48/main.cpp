#include <iostream>
#include <string>

using namespace std;


int main()
{
    string cumle,cumle2,cumle3;

    cumle="abalabuladanffhnfnnfb";

    cumle2="evet ";

    cumle3="kardanadam";
    //bir suru kullanim bicimi var
    cumle.insert(3,cumle2);
    cout<<cumle<<endl;

    cumle.insert(5,cumle3,6,2);
    cout<<cumle<<endl;

    cumle.insert(12,"yahu bunu da araya",3,15);
    cout<<cumle<<endl;

    cumle.insert(5,"hayde birader",8);
    cout<<cumle<<endl;

    cumle.insert(7,"usta bittik");
    cout<<cumle<<endl;

    cumle.insert(13,17,'?');
    cout<<cumle<<endl;

    cumle.insert(cumle.end(),5,'.');
    cout<<cumle<<endl;

    cout<<"\n\n";

    string usta,cirak;

    usta="para";

    cirak="rahat";

    cout<<"degistirilmeden once usta : "<<usta<<endl;
    cout<<"degistirilmeden once cirak : "<<cirak<<endl;

    usta.swap(cirak);//stringleri degistiriyor

    cout<<"degistirildikten sonra usta : "<<usta<<endl;
    cout<<"degistirildikten snora cirak : "<<cirak<<endl;

    cout<<"\n\n";

    string son="Merhaba kanks";
    son.pop_back();//en sondaki karakteri siliyor
    cout<<son<<"\n";



    return 0;
}
