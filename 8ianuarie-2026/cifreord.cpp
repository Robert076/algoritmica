#include <iostream>

using namespace std;

int main()
{
    int n, x, f[10];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 10)
        {
            f[x]++;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        while (f[i] > 0)
        {
            cout << i << " ";
            f[i]--;
        }
    }
    return 0;
}