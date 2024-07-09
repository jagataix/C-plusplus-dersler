#include <iostream>
#include <string>


using namespace std;



int main()
{
    string cumle;

    cumle="Deney cumlesi bu ustunde islem yapicaz";

    cout<<cumle<<endl;

    cumle.erase(6,7);
    cout<<cumle<<endl;

    cumle.erase(cumle.begin()+13);
    cout<<cumle<<endl;

    cumle.erase(cumle.begin()+13,cumle.end()-7);
    cout<<cumle<<endl;

    cout<<"\n\n";

    string taban,yaz,yaz2,yaz3,yaz4;

    taban="beni kullan kodunu denemek icin";

    yaz2="hava sicak bu aralar";

    yaz3="birkac parca";

    yaz4="kiricisin";

    yaz=taban;

    cout<<yaz<<endl;

    yaz.replace(4,8,yaz2);
    cout<<yaz<<endl;

    yaz.replace(12,4,yaz3,3,3);
    cout<<yaz<<endl;

    yaz.replace(8,12,"ulleeleln");
    cout<<yaz<<endl;

    yaz.replace(9,2,"aga yetetetr",4);
    cout<<yaz<<endl;

    yaz.replace(25,3,2,'+');
    cout<<yaz<<endl;

    yaz.replace(yaz.begin()+10,yaz.end()-6,yaz4);
    cout<<yaz<<endl;



    return 0;
}
