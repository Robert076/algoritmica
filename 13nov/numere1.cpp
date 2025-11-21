#include <iostream>

using namespace std;

int main()
{
    int n, f[1000] = {0}, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 1000)
        {
            f[x]++;
        }
    }
    // 998 995 900
    // i:     0 1 ... 998 999
    // f[i]:  0 0 ...  1   0
    int cnt = 0, a, b;
    for (int i = 999; i >= 100; i--)
    {
        if (f[i] == 0 && cnt == 0)
        {
            a = i;
            cnt++;
        }
        else if (f[i] == 0 && cnt == 1)
        {
            b = i;
            cnt++;
        }
    }
    if (cnt != 2)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << b << " " << a;
    }
    return 0;
}