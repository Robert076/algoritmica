#include <iostream>
using namespace std;
int main()
{
    // v[i]: 5 9 1 6 9
    //    i: 0 1 2 3 4
    int v[1000], n, mini;
    cin >> n;
    mini = 9999;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (mini > v[i])
        {
            mini = v[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == mini)
        {
            // trebuie scos
            for (int j = i; j <= n; j++)
            {
                v[j] = v[j + 1];
            }
            n--;
            i--;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}