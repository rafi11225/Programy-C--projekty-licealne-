#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
  const int max_los=4;
  srand(time(NULL));
  int n=rand()%max_los;
   string los[4]{"AC", "CB", "BD", "DA" };
    cout<<"Wygrywa "<<los[n];
    return 0;
}
