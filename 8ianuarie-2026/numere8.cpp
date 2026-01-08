#include <iostream>

using namespace std;

int main()
{
    int f[10001] = {0}, v[10001], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        f[v[i]]++;
    }
    for (int i = 9999; i >= 0; i--)
    {
        if (f[i] == 0)
            cout << i << " ";
    }
    return 0;
}