#include <iostream>
#include <string>


using namespace std;

//Amiral Batti Oyunu

int main()
{
    bool gemiler[5][5]
    {
        {0,1,0,0,1},
        {0,0,0,0,1},
        {1,0,0,1,1},
        {0,0,0,0,0},
        {0,1,1,0,1}

    };

    cout<<"Amiral Batti Oynununa Hosgeldiniz"<<endl<<"----------------------------------"<<endl;

    short int secim_satir,secim_sutun,deneme=1,kontrol=0,vurulan=0;



    while(kontrol!=1)

    {
        cout<<"Satir ve sutun sayisi giriniz(1-5):";
        cin>>secim_satir>>secim_sutun;

        if(gemiler[secim_satir-1][secim_sutun-1])
        {
            cout<<deneme<<".deneme Gemi vuruldu! Toplamda "<<vurulan+1<<" adet gemi imha edildi."<<endl<<endl;
            deneme++;
            vurulan++;
            gemiler[secim_satir-1][secim_sutun-1]=0;
        }
        else
        {
            cout<<deneme<<".deneme Gemiyi iskaladin! Toplamda "<<vurulan<<" adet gemi imha edildi."<<endl<<endl;
            deneme++;
        }
        for(short int i=0; i<5; i++)
        {
            for(short int j=0; j<5; j++)
            {
                if(gemiler[i][j])
                {
                    kontrol=0;
                    break;
                }
                kontrol=1;
            }
            if(kontrol==0)
                break;

        }
    }

    cout<<"Gemilerin hepsi imha edildi!"<<endl;
    cout<<"Toplam "<<deneme-1<<" adet atis yapildi."<<endl;



    return 0;
}
