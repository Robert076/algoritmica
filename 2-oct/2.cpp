#include <iostream>
using namespace std;

int main()
{
    int n, v[1000], s, par, pp, up, upar;
    cin >> n;
    s = 0;
    par = 0;
    upar = 0;
    pp = 0;
    up = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (par == 0 && v[i] % 2 == 0)
        {
            pp = i;
            par = 1;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (upar == 0 && v[i] % 2 == 0)
        {
            up = i;
            upar = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((i >= pp && i <= up) && (par != 0 && upar != 0))
            s = s + v[i];
    }
    if (pp == 0 && up == 0)
        cout << "NU EXISTA";
    else
        cout << s << " ";
    return 0;
}