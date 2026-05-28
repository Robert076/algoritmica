#include <iostream>

using namespace std;

int main()
{
    int n, m, A[105][105], F[1000005] = {0};
    bool gasit = false;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>A[i][j];
            F[A[i][j]]++;
        }
    }
    for(int i = 1000000; i >= 1; i--)
    {
        if (F[i] >= 2) {
            cout << i;
            gasit = true;
            break;
        }
    }
    if(!gasit) {
		cout << "IMPOSIBIL";
    }
    return 0;
}
