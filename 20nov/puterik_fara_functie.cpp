#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], aux, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            bool vi_este_putere = false;
            bool vj_este_putere = false;
            for (int l = 1; l <= v[i]; l *= k)
            {
                if (l == v[i])
                {
                    vi_este_putere = true;
                }
            }
            for (int l = 1; l <= v[j]; l *= k)
            {
                if (l == v[j])
                {
                    vj_este_putere = true;
                }
            }
            if (vi_este_putere && vj_este_putere)
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        bool vi_este_putere = false;
        for (int l = 1; l <= v[i]; l *= k)
        {
            if (l == v[i])
            {
                vi_este_putere = true;
            }
        }
        if (vi_este_putere)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}