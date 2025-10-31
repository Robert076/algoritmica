#include <iostream>
using namespace std;

int oglindit(int n)
{
    int ogl = 0;
    while (n > 0)
    {
        int ultima_cifra_a_lui_n = n % 10;
        ogl = ogl * 10 + ultima_cifra_a_lui_n;
        n /= 10;
    }

    return ogl;
}

int prim(int n)
{
    // presupunem ca returneaza 1 daca nr e prim si 0 daca nu e prim
}

void LaMultiAni()
{
    cout << "La multi ani";
}

int main()
{
    int n, v[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        LaMultiAni();
    }
    for (int i = 1; i <= n; i++)
    {
        if (prim(v[i]))
        {
            v[i] = v[i] * 2;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!prim(v[i]))
            cout << v[i];
    }

    return 0;
}