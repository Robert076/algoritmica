#include <iostream>

using namespace std;

int main()
{
    int n, pozitia_pe_care_introduc, nr_pe_care_il_introduc, v[100];
    cin >> n >> pozitia_pe_care_introduc >> nr_pe_care_il_introduc;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    n++; // cresc numarul de elemente pentru ca daca introduc un element nou, evident am nevoie de spatiu in plus
    for (int i = n; i >= pozitia_pe_care_introduc; i--)
    {
        v[i] = v[i - 1]; // efectiv mut elementele la dreapta
        // din 5 3 9 2 8 7, daca pozitia_pe_care_introduc = 2
        // atunci o sa am 5 3 3 9 2 8 7
    }
    // acum vectorul meu arata asa 5 3 3 9 2 8 7
    v[pozitia_pe_care_introduc] = nr_pe_care_il_introduc;
    // acum vectorul meu arata asa 5 100 3 9 2 8 7, cand nr_pe_care_il_introduc = 100
    return 0;
}