#include <iostream>

using namespace std;

bool EstePrim(int n)
{
    // returnam true daca este prim, si fals daca nu este prim
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    for (int d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
        {
            return false;
        }
    }

    return true;
}

bool Are3Cifre(int n)
{
    int nr_cifre = 0;
    if (n == 0)
    {
        nr_cifre = 1;
    }
    while (n > 0)
    {
        nr_cifre++;
        n /= 10;
    }

    if (nr_cifre == 3)
    {
        return true;
    }
    else
    {
        return false;
    }

    // Sau mai banal:
    // if(n > 99 && n < 1000)
    // {
    //     return true;
    // }
    // return false;
}

int main()
{
    int n, v[10001], f[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < 1000)
        {
            f[v[i]]++;
        }
    }
    int cnt = 0;
    for (int i = 100; i <= 999; i++)
    {
        if (f[i] == 0 && EstePrim(i) && Are3Cifre(i))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}