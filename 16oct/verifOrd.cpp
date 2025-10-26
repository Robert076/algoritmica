#include <iostream>
using namespace std;
int main()
{
    int nr_vectori, rezultate[11];
    cin >> nr_vectori;
    for (int j = 1; j <= nr_vectori; j++)
    {
        int n, v[1001];
        bool ok = true; // presupun ca vectorul meu e ordonat crescator
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        for (int i = 1; i < n; i++)
        {
            // cand i = n
            // i + 1 = n + 1 -> afara din vector, de aceea i < n, NU i <= n
            if (v[i] > v[i + 1])
            {
                ok = false;
            }
        }
        rezultate[j] = ok;
    }

    for (int i = 1; i <= nr_vectori; i++)
        cout << rezultate[i] << " ";
    return 0;
}
