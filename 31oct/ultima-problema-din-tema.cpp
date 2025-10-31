#include <iostream>
using namespace std;

void insereaza(int v[], int n, int k, int x)
{
    n++; // n = 4, l-am crescut
    for (int i = n; i >= k; i--)
    {
        v[i] = v[i - 1];
    }

    v[k] = x;
}

void insereaza2(int v[], int *n, int k, int x)
{
    *n = *n + 1;
    for (int i = *n; i >= k; i--)
    {
        v[i] = v[i - 1];
    }

    v[k] = x;
}

int main()
{
    int n, v[101]; // citim n = 3, v = [1, 2, 3] de exemplu
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    insereaza(v, n, 2, 10001); // vreau sa inserez la pozitia 2 numarul 10001
    // desi cresc n in functie, eu acolo cresc COPIA lui!! si cand iesim din functie n e tot 3
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    // de aia se va afisa [1, 10001, 2]

    // in schimb daca voi transmite prin referinta (transmit adresa lui)
    // atunci se va schimba si n, si se vor afisa corect toate numerele: [1, 10001, 2, 3]
    // insereaza2(v, &n, 2, 10001) -> aici il transmit prin adresa lui

    return 0;
}