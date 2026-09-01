#include <iostream>
using namespace std;
// ifstream fin("numere3.in");
// ofstream fout("numere3.out");
int castigator_joc(int a, int b, int c)
{
    while (a < b && c > b)
    {
        int s1 = 0, s3 = 0;
        int c1 = a, c3 = c;
        cout << a << " " << c << endl;
        while (c1)
        {
            s1 = s1 + c1 % 10;
            c1 = c1 / 10;
        }
        while (c3)
        {
            s3 = s3 + c3 % 10;
            c3 = c3 / 10;
        }
        a = a + s1;
        c = c - s3;
    }
    cout << a << " " << c << endl;
    if (a >= b && b >= c)
        return 0;
    if (a >= b && b <= c)
        return 1;
    if (a <= b && c <= b)
        return 2;
}
int main()
{
    int a, b, c, s1 = 0, s2 = 0, s3 = 0, p;
    cin >> p >> a >> b >> c;
    int c1 = a, c2 = b, c3 = c;
    while (a)
    {
        s1 = s1 + a % 10;
        a = a / 10;
    }
    while (b)
    {
        s2 = s2 + b % 10;
        b = b / 10;
    }
    while (c)
    {
        s3 = s3 + c % 10;
        c = c / 10;
    }
    if (p == 1)
    {
        cout << s1 + s2 + s3;
    }
    else if (p == 2)
        cout << castigator_joc(c1, c2, c3);
    return 0;
}