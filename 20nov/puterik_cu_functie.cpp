#include <iostream>

using namespace std;

bool este_putere(int n, int k) // functia asta va returna o variabila bool (Adica true sau false)
{
    // vreau ca functia mea sa verifice daca n este putere a lui k
    bool ok = false; // presupunem ca nu e putere
    for (int i = 1; i <= n; i *= k)
    {
        if (n == i)
        {
            ok = true;
        }
    }

    return ok;
}

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
            if (este_putere(v[i], k) && este_putere(v[j], k))
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
        if (este_putere(v[i], k))
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}