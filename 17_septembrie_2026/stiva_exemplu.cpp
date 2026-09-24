#include <iostream>
#import <cstring>
using namespace std;

int top(int st[100], int n)
{
    return st[n];
}

int pop(int st[100], int &n)
{
    int x = st[n];
    n--;
    return x;
}

void push(int st[100], int &n, int x)
{
    n++;
    st[n] = x;
}

int main()
{
    int stiva[255];
    int n, nr_propozitii;
    cin >> nr_propozitii;
    cin.get();
    for (int i = 1; i <= nr_propozitii; i++)
    {
        char s[250];
        cin.getline(s, 255);
        n = 0;
        bool e_corect = true;
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == '(') // (())
            {
                // cout << "pun pe stiva\n";
                push(stiva, n, 1);
                // cout << n << endl;
            }
            else
            {
                if (n == 0)
                {
                    e_corect = false;
                    break;
                }
                // cout << "scot de pe stiva\n";
                pop(stiva, n);
                // cout << n << endl;
            }
        }
        if (n == 0 && e_corect)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}