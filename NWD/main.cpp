#include <iostream>

using namespace std;

int main()
{
    cout << "podaj liczbe" << endl;
    int a , b;
    cin>>a;
    cin>>b;
    while(a!=b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout<<"NWD:"<<a<<endl;


    return 0;
}
