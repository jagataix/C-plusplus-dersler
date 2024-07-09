#include <iostream>
#include <string>


using namespace std;

class isci
{
public:
    isci()
    {
        cout<<"Basladi"<<endl;
    }
    ~isci()
    {
        cout<<"Bitti"<<endl;
    }
};

int main()
{
    isci* kisi=new isci;//class'imiz icin dinamik bir bellek alani ayirdik

    cout<<"Merhaba"<<endl;
    delete kisi;

    return 0;
}
