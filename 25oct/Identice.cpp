#include <iostream>
using namespace std;
int main()
{
    int v[1001], n, w[1001];
    cin >> n;
    bool contin_exact_aceleasi_elemente = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (w[i] > w[j])
            {
                int aux = w[j];
                w[j] = w[i];
                w[i] = aux;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] != w[i])
        {
            contin_exact_aceleasi_elemente = false;
        }
    }

    if (contin_exact_aceleasi_elemente == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}