#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N=30;
void Losuj(int A[])
{
    for(int i=0 ; i<N ; i++) A[i]=rand()%100+1;
}
void Wypisz(int A[])
{
    for(int i=0; i<N ; i++) cout<<A[i]<<" "; cout<<"."<<endl;
}
bool powt(int A[])
{

    for (int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
    if (A[i]==A[j])
    {
        cout<<A[i]<<" "<<"NASTALO POWTORZENIE!"<<endl;
    } return true;

    return false;

}
int main()
{
  //wypisywanie szeregu liczb
 srand(time (NULL));
 int A[N];
 Losuj(A);
 Wypisz(A);
 if(powt(A)==true || powt(A)==false)
return 0;
}
