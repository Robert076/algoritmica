#include <iostream>
using namespace std;
int main()
{
    int n, v[1000], aux;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 10 != 0)
        {
            for (int j = i; j < n; j++)
            {
                v[j] = v[j + 1];
            }
            i--;
            n--;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    if (n == 0)
    {
        cout << "NU EXISTA";
    }
    return 0;
}