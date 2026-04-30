#include <iostream>

using namespace std;
int main()
{
        int n, x, contine_0 = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                cin >> x;
                if (x == 0)
                        contine_0++;
                while (x)
                {
                        if (x % 10 == 0)
                        {
                                contine_0++;
                                break;
                        }

                        else
                        {
                                x = x / 10;
                        }
                }
        }
        cout << contine_0;
        return 0;
}
