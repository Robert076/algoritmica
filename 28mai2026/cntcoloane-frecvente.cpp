#include <iostream>

using namespace std;

int main()
{
    int n, m, A[105][105], cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> A[i][j];
        }
    }
    
    for(int j = 1; j <= m; j ++) {
        bool sunt_toate_diferite = true;
        int F[1000005] = {0};
        for(int i = 1; i <= n; i++) {
            if(F[A[i][j]] >= 1) {
                sunt_toate_diferite = false;
            }
            F[A[i][j]]++;
        }
        if (sunt_toate_diferite)
        {
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}
