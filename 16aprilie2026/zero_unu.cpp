#include <iostream>

using namespace std;

int main()
{
        int n = 1;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
                int x;
                cin >> x;
                bool am_gasit_0 = false, am_gasit_1 = false, am_gasit_alte_cifre = false;
                while (x)
                {
                        if (x % 10 == 0)
                        {
                                am_gasit_0 = true;
                        }
                        else if (x % 10 == 1)
                        {
                                am_gasit_1 = true;
                        }
                        else
                        {
                                am_gasit_alte_cifre = true;
                        }
                }
                if (!am_gasit_alte_cifre && am_gasit_0 && am_gasit_1)
                {
                        cnt++;
                }
        }
        cout << cnt;
        return 0;
}
