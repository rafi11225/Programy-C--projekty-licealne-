#include <iostream>

using namespace std;
float potega(int x, int n)
{
    if(n<=0)
    return 1;
    else
        return x*potega(x, n-1);
}
int main()
{
    int x, n;
    cout<<"Podaj podstawe:"<<endl;
    cin>>x;
    cout<<"Podaj wykladnik:"<<endl;
    cin>>n;
    cout<<"wynik to:"<<potega(x, n);
    return 0;
}
