#include <iostream>
using namespace std;
int main()
{
    int v[1000], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            for (int j = i; j < n; j++)
            {
                v[j] = v[j + 1];
            }
            i--;
            n--;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}
