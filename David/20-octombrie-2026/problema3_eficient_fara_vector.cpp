#include <iostream>
#include <fstream>

using namespace std;

// ifstream fin("bac.txt");

int main()
{
    int x, cifmax = -1, primul = 0, ultimul = 0;
    while(cin >> x)
    {
        int copie = x;
        bool gasit = false;
        while(x)
        {
            if(x % 10 > cifmax)
            {
                cifmax = x % 10;
                primul = copie;
                gasit = true;
            }
            x /= 10;
        }
        if(gasit == true)
        {
            continue;
        }
        x = copie;
        while(x)
        {
            if(x % 10 == cifmax)
            {
                cifmax = x % 10;
                ultimul = copie;
            }
            x /= 10;
        }
    }
    if(primul != 0 && ultimul != 0)
    {
        cout << primul << " " << ultimul;
    }
    else
    {
        cout << "nu exista";
    }
    return 0;
}
