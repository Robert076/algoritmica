#include <iostream>
using namespace std;

int TreiCifImp(int n)
{
    int cnt_curent = 0;
    bool am_gasit_3_consecutive = false;
    while (n)
    {
        if (n % 2 == 1)
        {
            cnt_curent++;
        }
        else
        {
            cnt_curent = 0;
        }
        if (cnt_curent == 3)
        {
            am_gasit_3_consecutive = true;
        }
    }
    return am_gasit_3_consecutive;
}

int main()
{
    return 0;
}
