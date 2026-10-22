#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou3.in");
ofstream fout("platou3.out");

int main()
{
    int n, x, lmax = 0, l = 0;
    fin >> n;
    for(int i = 1; i <= n; i ++)
    {
        fin >> x;
        if(x > 0)
        {
            l ++;   
            if(l > lmax)
            {
                lmax = l;    
            }
        }
        else if(x <= 0)
        {
            l = 0;    
        }
    }
    fout << lmax;
    return 0;
}
