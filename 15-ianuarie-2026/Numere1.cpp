#include <iostream>

using namespace std;

int main()
{
    int n, x, f[1000] = {0}, cnt = 0, num1 = 0, num2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 1000)
        {
            f[x]++;
        }
    }
    for (int i = 999; i >= 100; i--)
    {
        if (f[i] == 0 && cnt < 2)
        {
            cnt++;
            if (num1 == 0)
            {
                num1 = i;
            }
            else if (num2 == 0)
            {
                num2 = i;
            }
        }
    }
    if (num1 == 0 || num2 == 0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << num2 << " " << num1;
    }
    return 0;
}
