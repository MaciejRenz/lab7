#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba;
    int bombka;
    string bombki [] = {"@","O","o","*","*","*"};
    cout<<"Podaj liczbe: ";
    cin>>liczba;

     for(int i=1,l=liczba-1,m=1;i<liczba+2;i++,l--,m+=2)
    {

        for(int j=0;j<l;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<m;k++)
        {
            if(m==1)
            {
                cout<<"^";
            }
            else if (m==(liczba*2+1))
            {
                for(int i=0;i<liczba-1;i++)
                {
                    cout<<" ";
                }
                cout<<"H";
                break;
            }
            else
            {
                bombka=rand() % 6;
                cout <<bombki[bombka];
            }
        }
        for(int j=0;j<l;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
