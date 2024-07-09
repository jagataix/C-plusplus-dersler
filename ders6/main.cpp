#include <iostream>
#include <clocale>//turkce karakterler icin  bunu yaziyoruz
using namespace std;




int main()
{
    setlocale(LC_ALL,"Turkish");//ve bunu yaziyoruz

    const int benim_sayim=9;

//  benim_sayim=62; bunu yazarsak hata verir cunku yukarda "degistirlemez" tanimladik

    const float PI=3.14;

    cout<<"Çarþý Pazar karýþtý\n";

    unsigned int sayi=-7;

    cout<<"sayi="<<sayi<<"\n";//degeri yazmayacak cunku isaretsiz tanimladik

    signed int sayi2=-6;

    cout<<"sayi2="<<sayi2<<"\n";//yazacak cunku isaretli tanimladik

    float bir_sayi=2.58;

    bir_sayi=static_cast<int>(7.16);//veri turunu boyle degistiriyoruz

    cout<<"bir_sayi="<<bir_sayi<<endl;

    return 0;
}
