#include <iostream>

using namespace std;

int main()
{
    int l , u=0, d=0;
    while(l!=0)
    {
        cout<<"Podaj liczbe:"<<endl;
        cin>>l;
        if(l>=1)
        {
            d++;
        }
      else if(l<=-1)
        {
            u++;
        }
        if(l==0)
        {
    cout<<"Dodatnie:"<<d<<" "<<"Ujemne:"<<u<<endl;
        }
    }

    return 0;
}
