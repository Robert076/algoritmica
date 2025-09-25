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

    int n = 50;
    for (int i = 1; i <= n; i++)
    {
        cout << "Acest cod se executa de N ori";
        cout << "De exemplu, daca am N numere in vector";
        cout << "Pot pune v[i] iar i va fi 1, 2, 3..., N (50 in cazul nostru)";
    }
    cout << "Dar de aici incolo nu se va mai executa codul de 50 de ori";

    // sau un alt exemplu:
    // for (int i = 1; i <= n; i++)
    //      if(Numarul meu este par)
    //          par = 1
    //          pozitie_par = i // mare atentie, linia asta nu se executa in if, se va executa dupa for

    // dar se poate rezolva asa:
    // sau un alt exemplu:
    // for (int i = 1; i <= n; i++)
    //      if(Numarul meu este par)
    //      {
    //          par = 1
    //          pozitie_par = i
    //      }

    // mare atentie sa nu puneti
    // dar se poate rezolva asa:
    // sau un alt exemplu:
    // for (int i = 1; i <= n; i++)
    // {
    //      if(Numarul meu este par)
    //          par = 1
    //          pozitie_par = i  // daca pun asa, pozitie_par = i pentru fiecare i de la 1 la 50 (nu este in acolada de if)
    // }

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