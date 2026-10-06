#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int min = 1000000000, max = -1000000000, x, pmin = -1, pmax = -1, i = 0;
    while (fin >> x)
    {
        if (x >= min && x <= max)
        {
            pmax = i; // pmax = 5
            if (pmin == -1)
            {
                pmin = i; // pmin = 5
            }
        } // 2 7 -1 8 3 10
        else
        {
            if (x > max)
            {
                max = x; // max = 10
            }
            if (x < min)
            {
                min = x; // min = -1
            }
        }
        i++;
    }
    return 0;
}