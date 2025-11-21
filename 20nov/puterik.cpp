#include <fstream>
using namespace std;

ifstream fin("puterik.in");
ofstream fout("puterik.out");

int main()
{
    int n, v[1000], aux, k;
    fin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        bool este_putere = false;
        for (int l = 1; l <= v[i]; l = l * k) // l = 2, l = l * 2, l = l * 2
        {
            if (v[i] == l) // am gasit o putere a lui k (adica pe l) care sa fie egala cu v[i]
            {
                este_putere = true;
            }
        }
        if (este_putere == false)
        {
            for (int j = i; j < n; j++)
            {
                v[j] = v[j + 1];
            }
            i--;
            n--;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        fout << v[i] << " ";
    return 0;
}