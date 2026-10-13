#include <iostream>
using namespace std;

int val_min(int a, int b)
{
    int p10a = 1;
    int copie_a = a;
    while (copie_a)
    {
        p10a = p10a * 10;
        copie_a /= 10;
    }
    int p10b = 1;
    int copie_b = a;
    while (copie_b)
    {
        p10b = p10b * 10;
        copie_b /= 10;
    }
    if (b * p10a + a < a * p10b + b)
    {
        return b * p10a + a;
    }
    else
    {
        return a * p10b + b;
    }
}

int main()
{

    cout << val_min(1, 2);
    return 0;
}
