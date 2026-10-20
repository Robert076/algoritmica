#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int l = 1, lmax = 1, x, ultim, cnt = 0;
    fin >> ultim;
    while(fin >> x)
    {
        if(x%2 == ultim%2)
        {
            l++;
            if(l > lmax) 
            {
                lmax = l;
                cnt = 1;
            }
            else if(l == lmax) 
            {
                cnt ++; 
            }
        }
        else
        {
            l = 1;
        }
        ultim = x;
    }
    cout << lmax << " " << cnt;
    return 0;
}
