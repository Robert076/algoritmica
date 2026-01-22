#include <fstream>

using namespace std;
ifstream fin("maxcif.in");
ofstream fout("maxcif.out");
int main()
{
    int x, f[10] = {0}, maxaparitii = -10;
    while (fin >> x)
    {
        if (x < 10)
        {
            f[x]++;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        if (maxaparitii < f[i])

        {
            maxaparitii = f[i];
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        if (f[i] == maxaparitii)
        {
            fout << i << " ";
        }
    }

    return 0;
}