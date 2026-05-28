#include <iostream>

using namespace std;
int main()
{
    int n,m,A[105][105],cnt=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int vecin_st=0,vecin_dr=0,vecin_sus=0, vecin_jos=0;
            if(i>1)
            {
                vecin_sus=A[i-1][j];
            }
            if(i<n)
            {
                vecin_jos=A[i+1][j];
            }
            if(j>1)
            {
                vecin_st=A[i][j-1];
            }
            if(j<m)
            {
                vecin_dr=A[i][j+1];
            }
            cout << "Numarul este: " << A[i][j] << ", pe linia " << i << " si coloana " << j << endl;
            cout << "   Vecinul sus este: " << vecin_sus << endl;
            cout << "   Vecinul stanga este: " << vecin_st << endl;
            cout << "   Vecinul dreapta este: " << vecin_dr << endl;
            cout << "   Vecinul jos este: " << vecin_jos << endl;
            if(vecin_st%2==0&&vecin_sus%2==0&& vecin_dr%2==0&&vecin_jos%2==0)
            {
                cout << "   Are toti vecinii pari" << endl;
                cnt++;
            }
            else {
                cout <<"    Nu are toti vecinii pari" << endl;
            }
        }
    }
    cout<<cnt;
    return 0;
}

