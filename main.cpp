#include <iostream>
using namespace std;

int main()
{
    int n, v[1001], i, d, nr;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < n; i++)
    {
        // nr = 0;
        // Verificare lenta
        // for(d=1; d<=v[i]; d++)
        // {
        //     if(v[i]%d==0)
        //     {
        //         nr++;
        //     }
        // }
        int prim = 1; // 1 - adevarat, 0 - fals
        if (v[i] == 0 || v[i] == 1)
        {
            prim = 0;
        }
        if (v[i] != 2 && v[i] % 2 == 0)
        {
            prim = 0;
        }
        for (int d = 3; d < v[i]; d = d + 2)
        {
            if (v[i] % d == 0)
            {
                prim = 0;
            }
        }

        if (prim == 1)
        {
            for (int j = i; j < n - 1; j++)
            {
                v[j] = v[j + 1];
            }
            i--;
            n--;
        }
    }
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}