#include <iostream>

using namespace std;

int main()
{
        long long n;
        cin >> n; // n = 8183
        int ultima_cifra;
        ultima_cifra = n; // ultima_cifra = 3
        n /= 10;          // n = 818
        while (n)
        {
                if (ultima_cifra % 2 == n % 2) // 3 % 2 == 818 % 2
                {
                        cout << "nu este alternant";
                        return 0;
                }
                ultima_cifra = n; // ultima_cifra era 3, acum e 8
                n /= 10;          // 81
        }
        cout << "este alternant";
        return 0;
}
