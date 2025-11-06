#include <iostream>
using namespace std;

// o functie care returneaza numarul divizorilor primi
// returneaza -> inseamna ca nu e void
// returneaza numarul -> e int

int nr_divizori_primi(int n)
{
    int cnt = 0;
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            // inseamna ca d este divizor al lui n
            // de aici, trebuie sa verificam daca d este prim
            int nr_de_divizori_ai_divizorului = 0;
            for (int d2 = 1; d2 <= d; d2++) // avem 8
            {
                // aici numar divizorii divizorului
                if (d % d2 == 0)
                {
                    nr_de_divizori_ai_divizorului++;
                }
            }
            if (nr_de_divizori_ai_divizorului == 2)
            {
                // cout << d << " ";
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cout << nr_divizori_primi(6);
    return 0;
}