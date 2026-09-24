#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x, S[100] = {0}, P[100] = {0};
    while (fin >> x)
    {
        // P[primele_2_cifre_ale_lui_x] ++
        // S[ultimele_2_cifre_ale_lui_x] ++
        S[x % 100]++; // 500 -> 0 , 627 -> 27
        while (x > 100)
        {
            x /= 10;
        }
        P[x]++; // 1234 -> 12
    }
    int cnt = 0;
    for (int i = 10; i <= 99; i++)
    {
        if (S[i] == P[i]) // apare de atatea ori ca prefix de cate ori apare ca sufix
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}