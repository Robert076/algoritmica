#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 6 != 0)
        {
            if (i % 2 == 0 || i % 3 == 0)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}