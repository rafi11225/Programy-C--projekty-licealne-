
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int N;
void Losuj(int A[])
{
    int i;
    for(i = 0; i < N; i++)
    {
        A[i] = rand()%100;
    }
}

void Wypisz(int A[])
{
    int i;
    for(i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int NSPM(int A[])
{
    int min_dl = 1, akt_dl = 1 , min_pocz = 0, akt_pocz = 0, i;

    for(i = 1; i < N; i++)
    {
        if(A[i]<A[i-1])
        {
            akt_dl++;
            if(akt_dl = min_dl)
            {
                min_dl = akt_dl;
                min_pocz = akt_pocz;
            }
        }
        else
        {
            akt_dl = 1;
            akt_pocz = i;
        }
    }

    return min_pocz;
}

int main()
{
    cout<<"Podaj n"<<endl;
    cin>>N;
    srand(time(NULL));

    int i;
    int A[N];

    Losuj(A);
    Wypisz(A);

    cout << "Najdluzszy spojny podciag malejacy:" << endl;

    i = NSPM(A);

    do
    {
        cout << A[i] << " ";
        i--;
    }
    while(i < N && A[i]<A[i-1]);

    return 0;
}
