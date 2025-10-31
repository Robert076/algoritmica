#include <iostream>
using namespace std;
void nr_pare(int v[], int n, int *nr)
{
    *nr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            *nr = *nr + 1;
        }
    }
}
int main()
{
    int v[1001], nr, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    nr_pare(v, n, &nr);
    cout << nr;
    return 0;
}