#include <fstream>

using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

int main()
{
    int v[1000], n, aux;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n / 2; i++)
    {
        for (int j = i + 1; j <= n / 2; j++)
        {
            if (v[i] > v[j])

            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = n / 2 + 1; i < n; i++)
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