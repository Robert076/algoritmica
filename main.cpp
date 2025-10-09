#include <iostream>
using namespace std;

int main()
{
    int v[1000], n, ma, paritate = 0, poz;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    n++;
    for (int i = 1; i <= n; i++)
    {
        if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0))
        {
            poz = i;
            paritate = 1;
        }
    }
    for (int i = n; i >= poz; i--)
    {
        if (paritate == 1)
        {
            ma = (v[i] + v[i + 1]) / 2;
            v[i] = v[i - 1];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}