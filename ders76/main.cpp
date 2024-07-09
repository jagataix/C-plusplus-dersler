//Moduler bir yapi nasil kurulur?

#include "benimkutuphanelerim.h"//butun kutuphaneleri bir header dosyasinda topladik

//Duzenli olmak gerekiyor

int main()
{
    mesaj();//header olusturduk ve bunu kutuphane seklinde ekleyip fonksiyonumuzu cagirdik

    sinifim x;
    x.yazdir();//classlarimi toplayabilecegimiz bir kutuphane olusturduk ve classlarimi cekip nesnelerimi yazdirdik

    cout<<"Benim adim "<<x.adim<<endl<<endl;

    araba a;

    cout<<a.fiyati_al()<<endl;

    a.fiyati_yaz(439000);

    cout<<a.fiyati_al()<<endl;

    return 0;
}
