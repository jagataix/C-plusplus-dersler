otel::otel()
{
    sayi_1ler=0;
    sayi_2ler=0;
    oda_yonetimi();

}
void otel::oda_yonetimi()
{
    short int sayi;
    for(short int i=0; i<=20; i++)
        odalar[i]=bos;

    do
    {
        cout<<endl<<"\t--- STAR OTEL ---"<<endl;
        cout<<"\t1 . Oda Rezervasyonu"<<endl;
        cout<<"\t2 . Oda Boþaltma"<<endl;
        cout<<"\t3 . Dolu Oda Sayýsý"<<endl;
        cout<<"\t4 . Oda Raporu"<<endl;
        cout<<"\t5 . Toplam Gelir"<<endl;
        cout<<"\t6 . Çýkýþ Yap"<<endl;
        cout<<"Seçiminizi Giriniz : ";
        cin>>sayi;
        switch(sayi)
        {
        case 1:
            oda_rezervasyon();
            break;
        case 2:
            oda_tahliye_bosaltma();
            break;
        case 3:
            oda_sayi();
            break;
        case 4:
            oda_durum();
            break;
        case 5:
            gelir();
            break;
        case 6:
            exit(1);//hazir komut
            delete[] musteri_ad;
            delete[] musteri_soyad;
            break;

        default:
            cout<<"Yanlýþ bir deðer girdiniz!Lütfen 1-6 arasýnda bir deger giriniz."<<endl;
            break;
        }
    }
    while(sayi!=6);

}

void otel::oda_rezervasyon()
{
    short int sayi;
    int gun_sayisi,i=1,j=13;
    string ad,soyad;
    cout<<endl<<"\t-Lütfen bir oda tipi seçin-"<<endl;
    cout<<"\t1 . 1 kiþilik oda (600TL)"<<endl;
    cout<<"\t2 . 2 kiþilik oda (1000TL)"<<endl;
    cout<<"Oda seçiminizi giriniz : ";
    cin>>sayi;

    switch(sayi)
    {
    case 1:
        for(; i<=12; i++)
        {
            if(odalar[i]!=dolu)
            {
                odalar[i]=dolu;
                cout<<"Adýnýzý giriniz : ";
                cin>>ad;
                cout<<"Soyadýnýzý giriniz : ";
                cin>>soyad;
                cout<<"Kalacaðýnýz gün sayisini giriniz : ";
                cin>>gun_sayisi;
                toplam+=gun_sayisi*600;
                sayi_1ler++;
                musteri_ad[i]=new string;
                *musteri_ad[i]=ad;
                musteri_soyad[i]=new string;
                *musteri_soyad[i]=soyad;
                break;
            }
        }
        if(i==12)
            cout<<"Bütün 1 kiþilik odalar doldu"<<endl;
        break;
    case 2:
        for(; j<=20; j++)
        {
            if(odalar[j]!=dolu)
            {
                odalar[j]=dolu;
                cout<<"Adýnýzý giriniz : ";
                cin>>ad;
                cout<<"Soyadýnýzý giriniz : ";
                cin>>soyad;
                cout<<"Kalacaðýnýz gün sayisini giriniz : ";
                cin>>gun_sayisi;
                toplam+=gun_sayisi*1000;
                sayi_2ler++;
                musteri_ad[j]=new string;
                *musteri_ad[j]=ad;
                musteri_soyad[j]=new string;
                *musteri_soyad[j]=soyad;
                break;
            }
        }
        if(j==20)
            cout<<"Bütün 2 kiþilik odalar doldu"<<endl;
        break;
    default:
        cout<<"Oda türü için yanlýþ bir deðer girdiniz!"<<endl;

    }

}
void otel::oda_tahliye_bosaltma()
{
    short int sayi;
    cout<<"Boþaltacaðýnýz oda numarasýný giriniz : ";
    cin>>sayi;
    if(odalar[sayi]==dolu)
    {
        odalar[sayi]=bos;
        delete musteri_ad[sayi];
        delete musteri_soyad[sayi];

        if(sayi>0 && sayi<=12)
        {
            sayi_1ler--;
        }
        else if(sayi>12 && sayi<=20)
        {
            sayi_2ler--;
        }
        cout<<"Oda boþaltýldý."<<endl;
    }
    else
    {
        cout<<"Bu oda zaten boþ.Farklý bir numara giriniz."<<endl;
    }

}
void otel::oda_sayi()
{
     cout<<"Dolu olan 1 kiþilik oda sayýsý : "<<sayi_1ler<<endl;
     cout<<"Dolu olan 2 kiþilik oda sayýsý : "<<sayi_2ler<<endl;
}
void otel::oda_durum()
{
     if(sayi_1ler == 0 && sayi_2ler == 0)
         cout<<"Bütün odalar bos."<<endl;
     else
     {
        cout<<"Oda Numarasý Müþteri Adý Müþteri Soyadý"<<endl;
        cout<<"======================================="<<endl;
        for(short int i=1;i<=20;i++)
        {
            if(odalar[i]==dolu)
                cout<<i<<"\t\t"<<*musteri_ad[i]<<"\t\t"<<*musteri_soyad[i]<<endl;
        }
     }


}
void otel::gelir()
{
    cout<<"Gelir : "<<toplam<<endl;
}
