#include <iostream>

using namespace std;
int i;
int main()
{
    int x, y;
    cout<<"Podaj pierwsza liczbe:"<<endl;
    cin>>x;
    int l=0;
    cout<<"Podaj druga liczbe:"<<endl;
    cin>>y;

    for( i=x; i<=y; i++)
{



    {
        if(i%2==0 && i!=0)
        {
            cout<<i<<" ";
            l++;
        }

    }

}
cout<<"Liczba elementow:"<<l;
    return 0;
}
