#include <iostream>
#include <fstream>

using namespace std;

//ifstream fin("bac.txt");

int main()
{
    int x, l = 1, lmax = -1, ultimul_nr, cnt;
    cin >> x;
    ultimul_nr = x;
    l = 1;
    lmax = 1;
    while(cin >> x)
    {
        // ori imi stric secventa
        // ori o maresc
        if(x % 2 == ultimul_nr % 2)
        {
            // imi maresc secventa
            l++;

            if(l > lmax)
            {
                cnt = 1;
                lmax = l;
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
        ultimul_nr=x;
    }
    cout<<cnt;
    cout << lmax;
    cout<<" ";
    return 0;
}
