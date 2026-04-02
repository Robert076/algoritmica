#include <iostream>
using namespace std;

int count(int *n)
{
        *n = 0;
}

int main()
{
        int n = 7;
        count(&n);
        cout << n;
        return 0;
}

// & - referentiere (luam adresa)
// * - dereferentiere (luam valoarea de la o adresa)
// *adresa = valoarea de la adresa
// &valoare = adresa unei valori