#include <iostream>
using namespace std;
void f(int n)
{
    int i;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
            f(i - 1);
        }
        else
        {
            f(i - 1);
            cout << i;
        }
    }
}