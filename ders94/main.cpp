#include <iostream>
#include <string>

using namespace std;

struct tarih
{
    int gun;
    int ay;
    int yil;
};

struct tarih yas(struct tarih x,struct tarih y);

int main()
{
    struct tarih bugun,dogum,sonuc;

    cout<<"Bugunun tarihini giriniz(gun,ay,yil) : ";
    cin>>bugun.gun>>bugun.ay>>bugun.yil;

    cout<<"Dogum gununuzun tarihini giriniz(gun,ay,yil) : ";
    cin>>dogum.gun>>dogum.ay>>dogum.yil;

    sonuc=yas(bugun,dogum);

    cout<<sonuc.yil<<" yil "<<sonuc.ay<<" ay "<<sonuc.gun<<" gundur yasiyorsun"<<endl;

    return 0;
}

struct tarih yas(struct tarih x,struct tarih y)
{
     struct tarih sonuc={0,0,0};

     if(x.gun<y.gun)
     {
         x.ay-=1;
         sonuc.gun=30+x.gun-y.gun;
     }
     else
     {
         sonuc.gun=x.gun-y.gun;
     }

     if(x.ay<y.ay)
     {
         x.yil-=1;
         sonuc.ay=12+x.ay-y.ay;
     }
     else
     {
         sonuc.ay=x.ay-y.ay;
     }
     sonuc.yil=x.yil-y.yil;

     return sonuc;
};
