#include <iostream>
using namespace std;
int main()
{
    int v[10001], n, minim = 9999;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (minim > v[i])
        {
            minim = v[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == minim)
        {
            n++;
            for (int j = n; j > i; j--)
            {
                v[j] = v[j - 1];
            }

            v[i + 1] = minim;
            i++;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}