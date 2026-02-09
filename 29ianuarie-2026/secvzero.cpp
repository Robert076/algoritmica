#include <iostream>

using namespace std;

int main()
{
    // lungime_maxima = lungimea celei mai lungi secvente cu zerouri
    // lungime_curenta = lungimea secventei curente de zerouri
    int n, lungime_maxima = 0, lungime_curenta = 0, x, imaxim = 0, jmaxim = 0, icurent = 0, jcurent = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0 && lungime_curenta == 0)
        {
            icurent = i;
            lungime_curenta += 1;
        }
        else if (x == 0 && lungime_curenta != 0)
        {
            jcurent = i;
            lungime_curenta += 1;
        }
        else if (x != 0)
        {
            lungime_curenta = 0;
        }
        if (lungime_curenta > lungime_maxima)
        {
            lungime_maxima = lungime_curenta;
            imaxim = icurent;
            jmaxim = jcurent;
        }
    }
    cout << imaxim << " " << jmaxim;
    return 0;
}