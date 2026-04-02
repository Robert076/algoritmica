#include <iostream>
using namespace std;
int main()
{
        int n, nr = 0, p = 1;
        cin >> n;
        while (n != 0)
        {
                if (n % 2 != 0)
                {

                        nr = n % 10 * p + nr;
                        p = p * 10;
                }
                else
                {
                        p = p * 10;
                }
                n = n / 10;
        }
        cout << nr;
        return 0;
}