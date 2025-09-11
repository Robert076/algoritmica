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
    int minimul_din_al_doilea_vector = 100000000;
    for (int i = 0; i < m; i++)
    {
        if (B[i] < minimul_din_al_doilea_vector)
        {
            minimul_din_al_doilea_vector = B[i];
        }
    }
    int ok = 0; // presupun ca nu am gasit
    for (int i = 0; i < n; i++)
    {
        int numar_curent_din_primul_vector = A[i];
        if (numar_curent_din_primul_vector < minimul_din_al_doilea_vector)
        {
            cout << numar_curent_din_primul_vector << " ";
            ok = 1;
        }
    }
    if (ok == 0) // daca nu am gasit
        cout << "NU EXISTA";
    return 0;
}