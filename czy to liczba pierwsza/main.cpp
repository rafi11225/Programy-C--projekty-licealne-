#include <iostream>

using namespace std;
bool p(int n)
{
 int d=5;
 if(n==1)return false;
 if(n>2 && n%2==0)return false;
 if(n>3 && n%3==0)return false;
 while(d*d<=n)
        if(n%d==0)return false;
 else if(n%(d+2)==0)return false;
 else d+=6;
 return true;
}
int main()
{
    int x , y ;

    cout <<"podaj liczbe wieksza od 1"  << endl;
    cin>>x;
    for(y=x+1 ; y+1>1 ;)
        do
    {
        if(p(y)==true)
            cout<<y<<endl;
        else y++;
        clear;
    }
    while
    (p(y)==true);

    return 0;
}
