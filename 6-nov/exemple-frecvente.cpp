#include <iostream>
using namespace std;

int main()
{
    // vectori de frecventa
    int v[10] = {0}; // exista doar 10 cifre
    // v[i] pentru mine inseamna de cate ori a aparut numarul (sau cifra in cazul asta) "i"
    // fara vectori de frecventa s-ar rezolva asa:
    // vectorul meu:
    // 1 1 2 7 3 5 1 5 3 6 7 8 0 1 0 5 6 3 8 2 9 7 9 5 7
    /*

    rezolvarea:

    for(int i = 0; i <= 9; i++)
    {
        for(int j = 1; j <= n; j ++)
        {
            if(i == v[j])
            {
                cout << i << " ";
            }
        }
    }

    */

    /*
    care numere din sir apar o singura data? (sirul are numere de la 0 la 10000000)

    int n, v[1001];
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        cin >> v[i];
    }
    for(int i = 0; i <= 1000000; i ++)
    {
        int cnt = 0;
        for(int j = 1; j <= 1; j ++)
        {
            if(v[j] == i)
            {
                cnt++;
            }
        }
        if(cnt == 1) // a aparut o singura data
        {
            cout << i << " ";
        }
    }

    solutia mai eficienta (cu vectori de frecventa)

    int n, x, v[1000001] = {0};
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        cin >> x;
        v[x] ++; // acum v[i] NU mai inseamna al i-lea numar din sir, ci inseamna de cate ori apare i in sir.
    }
    for(int i = 0; i <= 1000000; i++)
    {
        if(v[i] == 1)
        {
            cout << i << " ";
        }
    }

    */
    int n;
    cin >> n; // 25
    for (int i = 1; i <= n; i++)
    {
        int cifra;
        cin >> cifra; // cin >> 1
        v[cifra]++;   // v[1] = 2, v[2] = 0, v[3] = 0, v[4] = 0 ....
    }
    for (int i = 0; i <= 9; i++)
    {
        while (v[i] > 0)
        {
            cout << i << " ";
            v[i]--;
        }
    }
    return 0;
}
