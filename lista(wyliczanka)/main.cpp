#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    int n, k;
    list<string>lista;
    list<string>::iterator it;
    string klaw;
    cout<<"Liczba elementow: ";
    cin>>n;
    cout<<"Co ile ma wyliczac: ";
    cin>>k;
    for(int i=1; i<=n; i++)
    {
        cout<<"Element "<<i<<":"<<endl;
        cin>>klaw;
        lista.push_back(klaw);
    }
    it=lista.begin();
    for(int i=1; i<n; i++ )
        for(int j=1; j<=k;j++)
    {
       it++;
        if(it==lista.end())lista.begin();
    }
    cout<<"Przetrwal: "<<*it;
    return 0;
}
