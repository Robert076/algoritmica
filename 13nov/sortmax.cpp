#include <iostream>
using namespace std;
int main()
{
    int v[1001], maxim, n, aux, imaxim;
    cin >> n;
    maxim = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > maxim)
        {
            maxim = v[i];
            imaxim = i;
        }
    }
    for (int i = 1; i < imaxim; i++)
    {
        for (int j = i + 1; j <= imaxim; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = imaxim + 1; i < n; i++)
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
    return 0;
}