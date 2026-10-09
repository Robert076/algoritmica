#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, pmin = 0, pmax, minim = 1000000, maxim = -1000000, i = 0;
    while (fin >> x)
    {
        if (x <= maxim && x >= minim)
        {
            if (pmin == 0)
            {
                pmin = i;
            }
            pmax = i;
        }
        else
        {
            if (x > maxim)
            {
                maxim = x;
            }
            if (x < minim)
            {
                minim = x;
            }
        }
        i++;
    }
    cout << pmin << " " << pmax;
    return 0;
}