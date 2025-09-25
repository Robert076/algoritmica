#include <iostream>

using namespace std;

int main()
{
    int n, m; // n - nr de elemente din primul vector, m - nr de elemente din al doilea vector
    cin >> n; // citim numarul de elemente din primul vector
    int A[10000], B[10000];
    for (int i = 0; i < n; i++) // citim elementele din primul vector
    {
        cin >> A[i];
    }
    cin >> m;                   // citim numarul de elemente din al doilea vector
    for (int i = 0; i < m; i++) // citim elementele din al doilea vector
    {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
    {
        int numar_curent_din_primul_vector = A[i];
        int e_ok = 1; // presupunem ca totul e ok de la inceput, numarul meu e mai mic decat toate din al doilea vector
        for (int j = 0; j < m; j++)
        {
            int numar_curent_din_al_doilea_vector = B[j];
            if (numar_curent_din_primul_vector >= numar_curent_din_al_doilea_vector)
            {
                e_ok = 0; // tocmai m-am contrazis, am gasit un numar care nu corespunde
            }
        }
        if (e_ok == 1)
        {
            cout << numar_curent_din_primul_vector << " ";
        }
    }
    return 0;
}