class otel
{
    string* musteri_ad[100] , *musteri_soyad[100];
    int toplam=0,sayi_1ler,sayi_2ler;

    enum durum
    {
        bos,dolu
    }odalar[20];
public:
    otel();
    void oda_yonetimi();
    void oda_rezervasyon();
    void oda_tahliye_bosaltma();
    void oda_sayi();
    void oda_durum();
    void gelir();
};
