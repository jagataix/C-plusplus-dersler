#include <iostream>


using namespace std;


void goster_bana(void*,char);

int main()
{
    int sayi=85;
    float ondalikli=6.58;
    double buyuk_ondalikli=63.236471;
    char harf='G';

    goster_bana(&sayi,'i');
    goster_bana(&ondalikli,'f');
    goster_bana(&buyuk_ondalikli,'d');
    goster_bana(&harf,'c');


    return 0;
}

void goster_bana(void* x,char tur)
{
    switch(tur)
    {
        case 'i':cout<<*((int*)x)<<endl;break;
        case 'c':cout<<*((char*)x)<<endl;break;
        case 'f':cout<<*((float*)x)<<endl;break;
        case 'd':cout<<*((double*)x)<<endl;break;
    }
}
