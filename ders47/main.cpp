#include <iostream>

using namespace std;

int main()
{
    //modifiers

    string ad,soyad;
    ad="Cagatay";
    soyad="ALTINTOPAC";

    ad+=" H. ";
    ad+=soyad;
    ad+='\n';

    cout<<ad<<endl;

    string yazi,yazi2,yazi3;

    yazi2="yaziyorum ";
    yazi3="buraya da yazayim bari";

    yazi.append(yazi2);
    yazi.append(yazi3,10,7);//okunacak string,indisi,okunacak karakter sayisi
    yazi.append("hayde ustad ");
    yazi.append("ddlnobnfobnfglbfnvlbfnbl",4,9);
    yazi.append(12,'T');
    yazi.append(yazi3.begin()+3,yazi3.end());

    cout<<yazi<<endl;

    cout<<"\n\n";

    string cumle,cumle2;

    cumle2="bu dil gercekten cok guzelmis aga";

    cumle.assign(cumle2);//direkt atama yapmak icin
    cout<<cumle<<endl;
    cumle.assign(cumle2,7,9);
    cout<<cumle<<endl;
    cumle.assign("degistir bakalim",8);
    cout<<cumle<<endl;
    cumle.assign("yazdir kardesim");
    cout<<cumle<<endl;
    cumle.assign(15,'!');
    cout<<cumle<<endl;
    cumle.assign(cumle2.begin()+17,cumle2.end()-13);
    cout<<cumle<<endl;






    return 0;
}
