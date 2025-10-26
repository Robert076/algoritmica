#include <iostream>
using namespace std;
int main()
{
    int v[101], n, c, cif, inv;
    cin >> n;
    inv = 0;
    bool apare = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    c = v[1];
    while (c > 0)
    {
        cif = c % 10;
        inv = inv * 10 + cif;
        c = c / 10;
    }

    for (int i = 2; i <= n; i++)
    {
        if (inv == v[i])
        {
            apare = true;
        }
    }
    if (apare == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}