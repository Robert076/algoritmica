#include <iostream>

using namespace std;

int main()
{
    int n, x, lcur = 0, lmax = 0, icur = 0, jcur = 0, imax = 0, jmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            jcur++;
            lcur++;
        }
        else
        {
            icur = i;
            jcur = i;
            lcur = 1;
        }
        if (lcur > lmax)
        {
            imax = icur;
            jmax = jcur;
            lmax = lcur;
        }
    }
    cout << imax << " " << jmax;
    return 0;
}
