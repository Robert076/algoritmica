#include <iostream>

using namespace std;

int main()
{
    int n, pozitia_pe_care_o_sterg, v[100];
    cin >> n >> pozitia_pe_care_o_sterg;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // vectorul meu arata asa: 5 3 9 2 8 7, iar daca pozitia_pe_care_o_sterg = 2
    for (int i = pozitia_pe_care_o_sterg; i <= n; i++)
        v[i] = v[i + 1];

    // acum arata asa: 5 9 2 8 7 7
    // deci la final fac n-- ca sa scap de ultimul numar (pentru ca acum nu mai am N numere ci am N-1)
    n--;
    return 0;
}