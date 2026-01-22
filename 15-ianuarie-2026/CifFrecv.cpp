#include <fstream>

using namespace std;

ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

bool esteprim(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    for (int d = 3; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int f[10] = {0}, x;
    while (fin >> x)
    {
        f[x]++;
    }
    for (int i = 9; i >= 0; i--)
    {
        if (f[i] > 0 && esteprim(i))
        {
            fout << i << " " << f[i];
            break;
        }
    }
    return 0;
}