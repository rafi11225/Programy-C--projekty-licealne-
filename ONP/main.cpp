#include <iostream>
#include <string>
#include <stack>

using namespace std;

string ONP(string w)
{
    stack<char> stos;
    stos.push('#');
    string onp = "";

    for(int i = 0; i < w.size(); i++)
    {
      switch w[i]
      {
     case '(':

        {
            stos.push('(');
            break;
        }
        case')':
        {
            while (stos.top()!='(')
            {
                onp=onp+stos.top();
                stos.pop();
            }
            stos.pop();
            break;
        }
        if (w[i]=='+' || w[i]=='-')
        {
            while (stos.top()!='#' && stos.top()!='(')
            {
                onp=onp+stos.top();
                stos.pop();
            }
            stos.push(w[i]);
            continue;
        }
        if (w[i]=='*' || w[i]=='/')
        {
            if (stos.top()=='*' || stos.top()=='/')
            {
                onp=onp+stos.top();
                stos.pop();
            }
            stos.push(w[i]);
        }
        else onp=onp+w[i];
    }
    }

    while(stos.top() != '#')
    {
        onp = onp + stos.top();
        stos.pop();
    }
    stos.pop();

    return onp;
}

int main()
{
    string w;
    cout << "Podaj wyrazenie w notacji tradycyjnej: ";
    cin >> w;
    cout << "Wyrazenie w ONP: " << ONP(w) << endl;
    return 0;
}
