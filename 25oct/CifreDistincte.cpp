#include <iostream>
using namespace std;
int main()
{
    int n, v[101];
    bool se_repeta_cifre = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int F[10] = {0};
        while (v[i] > 0)
        {
            F[v[i] % 10]++;
            v[i] = v[i] / 10;
        }
        for (int i = 1; i <= 9; i++)
        {
            if (F[i] > 1)
                se_repeta_cifre = true;
        }
    }
    if (se_repeta_cifre == true)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }
    return 0;
}