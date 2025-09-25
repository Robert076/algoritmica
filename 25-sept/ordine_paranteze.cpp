#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Ma execut de 10 ori";
    }
    cout << "Nu ma execut de 10 ori";

    for (int i = 1; i <= 5; i++)
    {
        cout << "Ma execut de 5 ori";
        cout << "Si eu ma execut de 5 ori";
    }

    for (int i = 1; i <= 3; i++)
        cout << "Ma execut de 3 ori";
    cout << "Nu ma execut de 3 ori";

    // tinem minte, mereu se executa prima conditie de sub for/while/if/dowhile
    // daca vrem sa executam mai multe lucruri, punem acolada

    int V[10], n = 5;
    for (int i = 1; i <= n; i++)
    {
        cin >> V[i];
    }
    cout << "Salut o data";

    for (int i = 1; i <= n; i++)
    {
        cin >> V[i];
        cout << "Salut de n ori";
    }
    return 0;
}