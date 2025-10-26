#include <iostream>
using namespace std;
int main()
{
    int v[501], n;
    cin >> n;
    bool sunt_egale = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] != v[j])
            {
                sunt_egale = false;
            }
        }
    }
    if (sunt_egale == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}