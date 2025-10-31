#include <iostream>
using namespace std;
void nr_pare(int v[], int n, int *nr)
{
    *nr = 0;
    for (int i = 1; i <= n; i++)
    {
        v[i] = -1;
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
    nr_pare(v, n, &nr); // cand transmitem o variabila normal (de exemplu "n") se face o copie. cand transmitem adresa ei (de exemplu "&n") se transmite adresa ei si se modifica variabila. cand transmitem vectori NU exista copii, ci doar adrese
    for (int i = 1; i <= n; i++)
    {
        cout << v[i];
    }
    return 0;
}