class ogrenci:public insan
{
private:
    string NO;
public:
    ogrenci(string NO,string ad,string soyad,int yas):insan(ad,soyad,yas)//constructor'i dahil ettik
    {
        this->NO=NO;
    }
    string no_ver()
    {
        return NO;
    }
};
