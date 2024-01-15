#include <iostream>
using namespace std;
int main()
{

    cout<<"Podaj 'n' wieksze od 2 i mniejsze od 1000000;"<<endl;
    int n;
    cin>>n;
    n++;
    bool tablica[n];
    for(int i=2; i<n; i++)
        tablica[i]=true;
    //////////////////////////////////
    for(int i=2; i<n; i++)
        for(int l = i+1; l<n; l++)
        if(l%i==0)
    {
        tablica[l]=false;
    }
    ///////////////////////////////
    for(int i=0 ; i <n; i++)
        for(int l=0; l<n; l++)
        if(tablica[i]==true && tablica[l]==true)
        if(i-l==2)
        cout<<l<<" "<<i<<endl;

    return 0;
}
