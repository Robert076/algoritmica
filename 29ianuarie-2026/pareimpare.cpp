#include <fstream>
using namespace std;

ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");

int main()
{
    int x, f[105] = {0};
    while (fin >> x)
    {
        f[x]++;
    }
    for (int i = 1; i <= 99; i += 2)
    {
        if (f[i] > 0)
            fout << i << " ";
    }
    fout << endl;
    for (int i = 98; i >= 0; i -= 2)
    {
        if (f[i] > 0)
            fout << i << " ";
    }

    return 0;
}