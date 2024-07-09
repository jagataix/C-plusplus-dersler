#include <iostream>
#include <string>


using namespace std;

class mat
{
    int* sayi1=nullptr;
    int* sayi2=nullptr;
public:
    mat(int x,int y)
    {
        sayi1=new int;
        sayi2=new int;
        *sayi1=x;
        *sayi2=y;
        cout<<*sayi1+*sayi2<<endl;
    }
    ~mat()
    {
        delete sayi1;//bellek sizintisini onlemek icin en son siliyoruz
        delete sayi2;
        cout<<"Bellek alani serbeset birakildi"<<endl;
    }
};



int main()
{
    int* a=new int;

    *a=5;

    int* b=a;//dangling pointer
    //silinen bir bellek konumunu gosteren pointer

    delete a;//boylelikle b'nin icindeki degeri de silmis oluyoruz

    cout<<*b<<endl;

    int* sayi=(int*) malloc(sizeof(int));//C de bellek alani ayirma

    *sayi=26;
    cout<<*sayi<<endl;
    //free(sayi);//serbest birakma

    //C++ da malloc ve free'yi kullanmiyoruz cunku nesnelerle calisamiyoruz
    delete b;

    int* x=nullptr;//bos bir pointer tanimliyoruz ama yer tanimlamiyoruz


    x=new int;//yer ayiriyoruz

    *x=83;

    cout<<*x<<endl;
    delete x;

    cout<<endl<<endl;

    mat* ptr=new mat(8,15);
    delete ptr;

    return 0;
}
