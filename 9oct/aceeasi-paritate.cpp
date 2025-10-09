#include <iostream>
using namespace std;

int main()
{
    int v[1000], n, ma, paritate = 0, poz;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++) // parcurg toate numerele
    {
        if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0))
        {                                    // daca numarul meu si cel imediat urmator lui au aceeasi paritate
            n++;                             // inseamna ca mai introducem un numar, deci crestem capacitatea vectorului
            for (int j = n; j >= i + 1; j--) // dupa ce am crescut capacitatea, mut toate elementele la dreapta mai putin primul
            {
                v[j] = v[j - 1];
            }
            v[i + 1] = (v[i] + v[i + 2]) / 2; // iar in mijlocul dintre numarul meu si cel imediat urmator (pe care l-am mutat) introduc media aritmetica
            i++;                              // sarim un numar ca sa nu comparam ce am introdus cu un numar existent de dinainte
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}