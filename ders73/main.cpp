#include <iostream>
#include <string>

using namespace std;



class araba
{
public:
    string marka;
    string model;
    int yil;

    araba(string a,string b,int c)//constructor
    {
        //bunu tanimlamasak da var ama ici bos
        //cagirmasak bile calisacak
        cout<<"Ddostum bu degisik birsey"<<endl;
        marka=a;
        model=b;
        yil=c;

    }
    void mesaj()
    {
        cout<<"Merhabalar!"<<endl;
    }
    void mesaj2();
    int hiz(int benim_hizim)
    {
        return benim_hizim/2;
    }
};

void araba::mesaj2()//methodlarimizi bu sekilde de tanimlayabiliriz
{
    cout<<"Naber bro"<<endl;
}

int main()
{
    araba x("Renault","Clio",2011);//constructer burada calisacak
    //nesneleri constructer ile bu sekilde de tanimlayabiliyoruz


    araba y("Opel","Corsa",2019);//constructer burada calisacak



    araba z("Hyundai","Tucson",2023);//constructer burada calisacak

    x.mesaj();

    y.mesaj2();

    cout<<x.marka<<" "<<x.model<<" "<<x.yil<<"  "<<x.hiz(100)<<endl;
    cout<<y.marka<<" "<<y.model<<" "<<y.yil<<"  "<<y.hiz(160)<<endl;
    cout<<z.marka<<" "<<z.model<<" "<<z.yil<<"  "<<z.hiz(130)<<endl;




    return 0;
}
