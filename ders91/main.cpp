#include <iostream>
#include <string>

using namespace std;

struct
{
    int yas;
    string ad;
    double maas;
}yapi,yapi2;//bu sekilde tanimlayabiliyoruz

struct araba
{
    string marka;
    string model;
    int yil;
};

int main()
{

    yapi.ad="Cagatay";
    yapi.maas=47837;
    yapi.yas=20;

    cout<<yapi.ad<<endl;
    cout<<yapi.maas<<endl;
    cout<<yapi.yas<<endl<<endl;

    yapi2.ad="Mehmet";
    yapi2.maas=84357;
    yapi2.yas=35;

    cout<<yapi2.ad<<endl;
    cout<<yapi2.maas<<endl;
    cout<<yapi2.yas<<endl<<endl;

    araba x={"Peoguot","206",23};

    cout<<x.marka<<endl;
    cout<<x.model<<endl;
    cout<<x.yil<<endl<<endl;



    return 0;
}
