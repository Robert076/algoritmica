#include <iostream>

using namespace std;

int main()
{
    int n, A[1001];
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        int numar_curent = A[i];
        // verificam daca numarul curent este prim
        int prim = 1; // presupunem ca e prim (1 - Adevarat, 0 - Fals)
        int nr_divizori = 0;
        for (int d = 1; d <= numar_curent; d++)
        {
            if (numar_curent % d == 0)
            {
                nr_divizori++;
            }
        }
        if (nr_divizori > 2) // are mai mult de 2 divizori (mai mult de 1 si el insusi)
        {
            prim = 0; // nu e prim
        }

        if (prim == 0) // daca e prim il stergem
        {
            for (int j = i; j <= n; j++)
            {
                A[j] = A[j + 1]; // mut numerele unul cate unul la stanga
            }
            n--; // doar la final il scad pe n, cand am mutat toate numerele si ultima pozitie e de sters
        }
    }
    // le afisam la final
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}