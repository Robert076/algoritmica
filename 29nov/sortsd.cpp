#include <iostream>

using namespace std;

int main()
{
    int v[1000], n, aux, suma_i, suma_j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        suma_i = 0;
        for (int d = 1; d * d <= v[i]; d++)
        {
            if (v[i] % d == 0)
            {
                suma_i += d;
                if (d * d != v[i])
                {
                    suma_i += v[i] / d;
                }
            }
        }
        for (int j = i + 1; j <= n; j++)
        {
            suma_j = 0;
            for (int d = 1; d * d <= v[j]; d++)
            {
                if (v[j] % d == 0)
                {
                    suma_j += d;
                    if (d * d != v[j])
                    {
                        suma_j += v[j] / d;
                    }
                }
            }

            if (suma_i > suma_j)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                suma_i = suma_j;
            }
            else if (suma_i == suma_j)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}