#include <iostream>

using namespace std;

void yazdir();
void yazdir2(string ad,char harf );
int main()
{
    yazdir();
    yazdir();
    yazdir2("Cagatay",'B');
    yazdir2("Hosgeldin",'+');
    cout<<"\n";

    return 0;
}

void yazdir()
{
    cout<<"Ben bunu yazdiriyorum\n";
}
void yazdir2(string ad,char a)
{
    cout<<"Merhaba "<<ad<<" "<<a<<endl;
}
