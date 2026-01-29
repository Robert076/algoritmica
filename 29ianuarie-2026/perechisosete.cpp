#include <iostream>
using namespace std;
int main()
{
    int f[103] = {0}, x, s = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[x]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        int nrsosete = f[i];
        int perechi = nrsosete / 2;
        s = s + perechi;
    }
    cout << s;
}
