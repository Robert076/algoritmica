#include <iostream>
using namespace std;
int main()
{
    int n, v[100], pozitii[100];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pozitii[i] = i;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;

                aux = pozitii[i];
                pozitii[i] = pozitii[j];
                pozitii[j] = aux;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " " << pozitii[i] << " ";
    }
    return 0;
}