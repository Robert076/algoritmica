#include <iostream>
using namespace std;
void nr_pare(int a[], int n, int &p)
{
        p = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] % 2 == 0)
                {
                        p++;
                }
        }
}
int main()
{
        int a[100], n, p;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                cin >> a[i];
        }
        nr_pare(a, n, p);
        cout << p;
}