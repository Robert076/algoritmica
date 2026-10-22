#include <iostream>
using namespace std;
int main()
{
    int n,A[105][105],copie;
    cin>>n;
    copie = n;
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
        {
            if(i<j)
            {
                A[i][j]=n%10;
            }
            else if(i==j)
            {
                A[i][j]=0;
            }
        }
        n /= 10;
    }
    for(int j=1; j<=6; j++)
    {
        for(int i=1; i<=6; i++)
        {
            if(i>j)
            {
                A[i][j]=copie%10;
            }
            else if(i==j)
            {
                A[i][j]=0;
            }
        }
            copie=copie/10;
    }
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
