class insan
{
protected:
    string ad;
    string soyad;
    int yas;
public:
    void ad_gir(string ad)
    {
        this->ad=ad;
    }
    void syoad_gir(string soyad)
    {
        this->soyad=soyad;
    }
    void yas_gir(int yas)
    {
        this->yas=yas;
    }
    string ad_ver()
    {
        return ad;
    }
    string soyad_ver()
    {
        return soyad;
    }
    int yas_ver()
    {
        return yas;
    }
    insan(string ad,string soyad,int yas)
    {
        this->ad=ad;
        this->soyad=soyad;
        this->yas=yas;
    }
};
