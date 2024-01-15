#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, d=2;
    cout << "wprowadz liczbe 'n'";
    cin>>n;
    cout<<"n="<<n<<endl;
    cout<<n<<"="<<endl;
    while(d*d<=n)
        if(n%d==0)
    {
        cout<<d<<" * ";
        n=n/d;

    }
    else d++;
    cout<<n;
    return 0;
}
