#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <windows.h>
#include <string>
#include <list>
using namespace std;
int i;
int l;
list<char>lista;
list<char>::iterator it;
int main()
{


   int n;


   cout<<"Podaj liczbe liter:"<<endl;
   cin>>l;


    for(i=1; i<=l; i++ )
   {
   cout<<"Podaj liczbe:"<<i<<":"<<endl;
   cin>>n;
   lista.push_back(n);
   }
it=lista.begin();
for(int j=-1; j<l; j++)
{

 it++;
  cout<<char(*it);
}

   return 0;
}
