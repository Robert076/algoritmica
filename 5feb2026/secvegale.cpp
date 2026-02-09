#include <iostream>

using namespace std;

int main()
{
    int n, x, ultim = -1, lcur = 0, lmax = 0, icur = 0, jcur = 0, imax = 0, jmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (ultim == -1)
        { // daca suntem la primul element (ultimul va fi -1 pentru ca asa l-am initializat de la inceput)
            icur = 1;
            jcur = 1;
            lcur = 1;
        }
        else
        {                   // altfel, cand ultim != -1 stim ca nu suntem la primul element
            if (x == ultim) // nu suntem la primul element (rezulta din iful de mai sus) SI x este egal cu ultimul
            {
                jcur++;
                lcur++;
            }
            else // nu suntem la primul element (rezulta din iful de mai sus) SI x NU este egal cu ultimul
            {
                icur = i;
                jcur = i;
                lcur = 1;
            }
        }
        if (lcur >= lmax)
        {
            imax = icur;
            jmax = jcur;
            lmax = lcur;
        }
        ultim = x;
    }
    cout << imax << " " << jmax;
    return 0;
}
