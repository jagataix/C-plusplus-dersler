#include <iostream>
#include <string>

using namespace std;


int main()
{
    string harfler[3][5]=
    {
        {"a","b","c","d","e"},
        {"f","g","h","j","v"},
        {"k","l","m","n","p"}
    };

    cout<<harfler[1][3]<<endl<<endl;

    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<5; j++)
            cout<<harfler[i][j]<<"  ";

        cout<<endl<<endl;
    }

    cout<<endl<<endl;

    string harfler2[3][3][2]=
    {
        {
            {"a","b"},
            {"c","d"},
            {"e","u"}
        },

        {
            {"x","y"},
            {"z","t"},
            {"b","o"}
        },

        {
            {"s","i"},
            {"t","q"},
            {"x","a"}
        },

    };



    for(short int i=0; i<3; i++)
    {
        for(short int j=0; j<3; j++)
        {
            for(short int k=0; k<2; k++)
                cout<<harfler2[i][j][k]<<" ";

            cout<<"  ";
        }
        cout<<endl<<endl;
    }

    cout<<endl<<endl;






    return 0;
}
