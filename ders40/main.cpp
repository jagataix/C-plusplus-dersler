#include <iostream>
#include <cstring>


using namespace std;


int main()
{
    char selam[8]= {'M','e','r','h','a','b','a','\0'};
    cout<<"Mesaj : "<<selam<<endl;

    char str1[10]="Cagatay";
    char str2[12]=" Altintopac";
    char str3[10];

    short int boyut;

    strcpy(str3,str1);
    cout<<"strcpy(str3,str1) : "<<str3<<endl;

    strcat(str1,str2);
    cout<<"strcat(str1,str2) : "<<str1<<endl;

    boyut=strlen(str1);
    cout<<"Boyut : "<<boyut<<endl;


    string cumle="Hayat cok zor degil mi";//bu ozellik C++'a ozel

    cout<<cumle<<endl;

    string cumle1="Bunlari simdi";
    string cumle2="efsaneymis";
    string cumle3=" oha saka mi";

    int boyut2;

    cumle3=cumle1;//bu sekilde metinsel ifadeleri birbirine tanimlayabiliyoruz
    //strcpy gibi
    cout<<cumle3<<endl;

    cumle3=" oha saka mi";

    cumle1=cumle2+cumle3;
    //strcat gibi
    cout<<cumle1<<endl;

    cumle1=cumle2+" dlbgmd "+cumle3;
    cout<<cumle1<<endl;

    //"append" bir neseneye yonelik programlamada hazir fonksiyon

    cumle3=cumle1.append(cumle2);//sonuna ekliyor
    cout<<cumle3<<endl;

    cumle3=cumle3.append(10,'a');
    cout<<cumle3<<endl;


    return 0;
}
