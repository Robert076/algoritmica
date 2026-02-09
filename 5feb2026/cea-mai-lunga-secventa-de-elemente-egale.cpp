#include <iostream>

using namespace std;

int main()
{
    int n, x, ultim = -1, lcur = 0, lmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (ultim == -1)
        { // daca suntem la primul element (ultimul va fi -1 pentru ca asa l-am initializat de la inceput)
            lcur = 1;
        }
        else
        {                   // altfel, cand ultim != -1 stim ca nu suntem la primul element
            if (x == ultim) // nu suntem la primul element (rezulta din iful de mai sus) SI x este egal cu ultimul
            {
                lcur++;
            }
            else // nu suntem la primul element (rezulta din iful de mai sus) SI x NU este egal cu ultimul
            {
                lcur = 1;
            }
        }
        if (lcur > lmax)
        {
            lmax = lcur;
        }
        ultim = x;
    }
    cout << lmax;
    return 0;
}
