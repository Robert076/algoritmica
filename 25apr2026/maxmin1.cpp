#include <iostream>
#include <fstream>

using namespace std;

ifstream alabala("pozitiex.in");
ofstream portocala("pozitiex.out");

int main()
{
        int n, m, c = 0, v[101], x[101], cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                cin >> v[i];
        }
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
                cin >> x[j];
        }
        for (int i = 1; i <= n; i++)
        {
                bool ok = true;
                for (int j = 1; j <= m; j++)
                {
                        if (x[j] >= v[i])
                        {
                                ok = false;
                        }
                }
                if (ok == true)
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}