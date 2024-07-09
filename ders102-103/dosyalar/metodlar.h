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
        cout<<"\t2 . Oda Bo�altma"<<endl;
        cout<<"\t3 . Dolu Oda Say�s�"<<endl;
        cout<<"\t4 . Oda Raporu"<<endl;
        cout<<"\t5 . Toplam Gelir"<<endl;
        cout<<"\t6 . ��k�� Yap"<<endl;
        cout<<"Se�iminizi Giriniz : ";
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
            cout<<"Yanl�� bir de�er girdiniz!L�tfen 1-6 aras�nda bir deger giriniz."<<endl;
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
    cout<<endl<<"\t-L�tfen bir oda tipi se�in-"<<endl;
    cout<<"\t1 . 1 ki�ilik oda (600TL)"<<endl;
    cout<<"\t2 . 2 ki�ilik oda (1000TL)"<<endl;
    cout<<"Oda se�iminizi giriniz : ";
    cin>>sayi;

    switch(sayi)
    {
    case 1:
        for(; i<=12; i++)
        {
            if(odalar[i]!=dolu)
            {
                odalar[i]=dolu;
                cout<<"Ad�n�z� giriniz : ";
                cin>>ad;
                cout<<"Soyad�n�z� giriniz : ";
                cin>>soyad;
                cout<<"Kalaca��n�z g�n sayisini giriniz : ";
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
            cout<<"B�t�n 1 ki�ilik odalar doldu"<<endl;
        break;
    case 2:
        for(; j<=20; j++)
        {
            if(odalar[j]!=dolu)
            {
                odalar[j]=dolu;
                cout<<"Ad�n�z� giriniz : ";
                cin>>ad;
                cout<<"Soyad�n�z� giriniz : ";
                cin>>soyad;
                cout<<"Kalaca��n�z g�n sayisini giriniz : ";
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
            cout<<"B�t�n 2 ki�ilik odalar doldu"<<endl;
        break;
    default:
        cout<<"Oda t�r� i�in yanl�� bir de�er girdiniz!"<<endl;

    }

}
void otel::oda_tahliye_bosaltma()
{
    short int sayi;
    cout<<"Bo�altaca��n�z oda numaras�n� giriniz : ";
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
        cout<<"Oda bo�alt�ld�."<<endl;
    }
    else
    {
        cout<<"Bu oda zaten bo�.Farkl� bir numara giriniz."<<endl;
    }

}
void otel::oda_sayi()
{
     cout<<"Dolu olan 1 ki�ilik oda say�s� : "<<sayi_1ler<<endl;
     cout<<"Dolu olan 2 ki�ilik oda say�s� : "<<sayi_2ler<<endl;
}
void otel::oda_durum()
{
     if(sayi_1ler == 0 && sayi_2ler == 0)
         cout<<"B�t�n odalar bos."<<endl;
     else
     {
        cout<<"Oda Numaras� M��teri Ad� M��teri Soyad�"<<endl;
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
