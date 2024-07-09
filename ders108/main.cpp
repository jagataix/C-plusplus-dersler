#include <iostream>
#include <string>
#include <iomanip>


using namespace std;



int main()
{
    cout<<false<<endl;
    cout.setf(ios::boolalpha);//yazma modunu degistirebiliyoruz
    cout<<false<<endl;

    int a=37;

    int b=125;

    float c=43.95;

    cout<<a<<endl;
    cout.setf(ios::hex,ios::basefield);//16'lik yazima gecis
    cout<<a<<endl;
    cout.setf(ios::oct,ios::basefield);//8'lik yazima gecis
    cout<<a<<endl;
    cout.setf(ios::hex,ios::basefield);
    cout.setf(ios::showbase);//taban gosterme modu
    cout<<b<<endl;
    cout.setf(ios::uppercase);//buyuk harf modu
    cout<<b<<endl;
    cout<<c<<endl;
    cout.setf(ios::fixed,ios::floatfield);
    cout<<c<<endl;
    cout.setf(ios::scientific,ios::floatfield);
    cout<<c<<endl;
    cout.unsetf(ios::scientific);//ozellikleri kaldirabiliyoruz
    cout.unsetf(ios::floatfield);
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout<<c<<endl;
    cout.unsetf(ios::showpos);

    int k=-49;
    //yukariyi yoruma alip deneyelim
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(15)<<k<<endl;
    cout.setf(ios::internal,ios::adjustfield);
    cout<<setw(15)<<k<<endl;
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(15)<<k<<endl<<endl;

    char dizi[]="Merhabalar";

    char harf='C';

    cout.write(dizi,3);//kac tanesini yazacagini belirleyebiliyoruz

    cout<<endl;

    cout.put(harf);//bir harf yazdirmak icin kullanabiliriz

    cout<<endl;

    cout.precision(4);//toplamda kac birimlik bir yeri yazdiracagimizi belirleyebiliyoruz

    cout<<5.8557<<endl;

    return 0;
}
