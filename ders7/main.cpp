#include <iostream>




using namespace std;




int main()
{
    // veri turlerinin buyukluklerine bakiyoruz

    cout<<"char:"<<sizeof(char)<<"\n";
    cout<<"int:"<<sizeof(int)<<"\n";
    cout<<"short int:"<<sizeof(short int)<<"\n";
    cout<<"long int:"<<sizeof(long int)<<"\n";
    cout<<"float:"<<sizeof(float)<<"\n";
    cout<<"double:"<<sizeof(double)<<"\n";
    cout<<"wchar_t:"<<sizeof(wchar_t)<<"\n\n\n";

    int sayim=4;
    float sayim2=5.73;
    double sayim3=8.276936758905;

    cout<< "int="<<sayim<<"\n";
    cout<< "float="<<sayim2<<"\n";
    cout<< "double="<<sayim3<<"\n\n";

    int sayim4=6;
    float sayim5=167e3;//e3 10 uzeri 3 demektir sonucu bununla carpip tanimliyor
    double sayim6=19E4;

    cout<< "int="<<sayim4<<"\n";
    cout<< "float="<<sayim5<<"\n";
    cout<< "double="<<sayim6<<"\n\n";

    bool boolsayim=false;


    cout<<"Boolean="<<boolsayim<<"\n\n\n";//true icin 1 false icin 0 degeri donduruyor

    char x=72,y=73,z=74;

    cout<<"char="<<x<<y<<z<<"\n\n\n";//char olarak tanimladigimiz icin ascýý kodlardaki karsiligindaki sembolu yazdiriyor


    string benim_cumlem="Bunu bu sekilde yazalim";

    cout<<"benim cumlem="<<benim_cumlem<<"\n\n\n";

    int sayi=7;

    cout<<&sayi<<"\n";//bellekteki adresi bu sekilde gosterebiliyoruz
    //"int" 4 byte yer tutar bizim sayimizin adresini istedigimizde bize ilk 1 bytelik kismin adresini gosterecek



    return 0;
}
