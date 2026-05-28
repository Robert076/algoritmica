/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, m, A[105][105];
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> A[i][j];
        }
    }
    
    cout << "Parcurgem prima data pe linii: \n";
    
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "Parcurgem a doua data pe coloane: \n";
    
    for(int j = 1; j <= m; j ++) {
        for(int i = 1; i <= n; i ++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
