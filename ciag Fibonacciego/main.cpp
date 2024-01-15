#include <iostream>

using namespace std;
///ciag Fibonacciego pierwszy wyraz n1=0, n2=1, reszta rowna sumie dwoch poprzednich
void ciag(int n)
{
    long long a=0, b=1;
    for(int i=0; i<n; i++) //uwzglednienie liczby elementów ciagu
    {
        cout<<b<<" ";
        b=a+b;
        a=b-a;
    }
}
int main()
{
    int n;
    cout << "Podaj liczbe elementow ciagu:" << endl;
    cin>>n;
    ciag(n);
    return 0;
}
