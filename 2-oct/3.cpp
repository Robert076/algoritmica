#include <iostream>
using namespace std;

int main()
{
    double v[1000];
    int n, nr;
    cin >> n;
    nr = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[n - 1] > v[0])
        {
            if (v[i] < v[0] || v[i] > v[n - 1])
            {
                nr++;
            }
        }
        else if (v[i] < v[n - 1] || v[i] > v[0])
        {
            nr++;
        }
    }
    cout << nr << " ";
    return 0;
}