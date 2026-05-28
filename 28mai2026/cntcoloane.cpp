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
        for(int k = 1; k < n; k++)
            for(int l = k + 1; l <= n; l++)
            {
                if(A[k][j] == A[l][j])
                {
                    sunt_toate_diferite = false;
                }
            }
        if(sunt_toate_diferite) {
            cnt ++;
        }
    }
    
    cout << cnt;
    
    return 0;
}
