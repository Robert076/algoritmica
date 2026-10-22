#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

int main()
{
    double x, maxi = -1000000001;
    int n, primul = -1, ultimul = -1;
    fin >> n;
    for(int i = 1; i <= n; i ++)
    {
        fin >> x;
        if(x > maxi)
        {
            maxi = x;
            primul = i;
        }
        else if(x == maxi)
        {
            ultimul = i;
        }
    }
    fout << primul << " " << ultimul;
    return 0;
}
