#include <iostream>
#include <string>


using namespace std;

class menu//parent
{
public:
    string ad;
    float kalori;
    void mesaj()
    {
        cout<<ad<<" ("<<kalori<<" kalori)"<<endl<<endl;
    }
};
class icecek:public menu//child
{
public:


    float gram;
    float kalori_gram()
    {
        return kalori/gram;
    }


};






int main()
{
    menu acim;

    acim.ad="Lahmacun";
    acim.kalori=567;
    acim.mesaj();

    icecek gazoz;

    gazoz.ad="Gazoz";
    gazoz.kalori=400.65;
    gazoz.gram=5;
    gazoz.mesaj();
    cout<<"Icecegin kalori/gram degeri : "<<gazoz.kalori_gram()<<endl<<endl;


    return 0;
}
