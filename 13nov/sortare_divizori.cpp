#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int main()
{
    int n, v[1001], aux;
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        int nr_div_i = 0;
        for (int d = 1; d <= v[i]; d++)
        {
            if (v[i] % d == 0)
            {
                nr_div_i++;
            }
        }
        for (int j = i + 1; j <= n; j++)
        {
            int nr_div_j = 0;
            for (int d = 1; d <= v[j]; d++)
            {
                if (v[j] % d == 0)
                {
                    nr_div_j++;
                }
            }
            if (nr_div_i < nr_div_j)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            else if (nr_div_i == nr_div_j)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        fout << v[i] << " ";
    return 0;
}