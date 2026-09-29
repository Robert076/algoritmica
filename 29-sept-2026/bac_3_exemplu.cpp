#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int S[100], P[100], x, cnt = 0;
    while (fin >> x)
    {
        S[x % 100]++;
        while (x > 100)
        {
            x /= 10;
        }
        P[x]++;
    }
    for (int i = 10; i < 100; i++)
    {
        if (S[i] == P[i])
        {
            cnt++
        }
    }
    cout << cnt;
    return 0;
}

// Vom citi numere din fisier pana la terminarea fisierului cu o bucla while
// calculam sufixul numarului ca fiind restul impartirii la 100
// si calculam prefixul numarului impartindu-l in mod repetat la 10 cat timp are mai mult de 2 cifre
// contorizam atat prefixul cat si sufixul in vectorii de frecventa corespunzatori
// iar la final parcurgem toate numerele de 2 cifre si vedem care din ele apar
// de atatea ori prefix de cate ori apar si sufix, contorizandu-le.
// Programul este eficient din punct de vedere al timpului de executie pentru ca nu face
// bucle care nu sunt necesare, avand o complexitate liniara.