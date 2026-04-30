#include <iostream>

using namespace std;

int main()
{
        int n, nr = 0, p = 1, maxim = -1, x, nr_maxim = -1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                p = 1;
                nr = 0;
                cin >> x;
                int copie = x;
                while (x)
                {
                        if (x % 2 == 0)
                        {
                                nr = x % 10 * p + nr;
                                p = p * 10;
                        }
                        x = x / 10;
                }
                if (nr > maxim)
                {
                        maxim = nr;
                        nr_maxim = copie;
                }
                else if (nr == maxim)
                {
                        if (copie > nr_maxim)
                        {
                                nr_maxim = copie;
                        }
                }
                if (nr == 0)
                {
                        maxim = 0;
                }
        }
        cout << nr_maxim;
        return 0;
}
