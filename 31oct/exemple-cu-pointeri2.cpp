#include <iostream>
using namespace std;

void SchimbaNumereIntreEle1(int a, int b) // a si b sunt copii dupa numerele pe care le-am dat
{
    int aux = a; // lui aux ii dau valoarea COPIEI lui a
    a = b;       // copiei lui a ii dau valoarea copiei lui b
    b = aux;     // copiei lui b ii dau valoarea lui aux
}

void SchimbaNumereIntreEle2(int *a, int *b) // a si b sunt adrese
{
    int aux = *a; // lui aux ii dau valoarea de la adresa a
    *a = *b;      // la valoarea de la adresa lui a pun valoarea de la adresa lui b
    *b = aux;     // la valoarea de la adresa lui b pun valoarea lui aux
}

int main()
{
    int a = 5, b = 7;
    SchimbaNumereIntreEle1(a, b);  // functia asta face copii la numere (nu lucreaza cu adrese) deci functia nu are efect (nu se va intampla nimic)
    cout << a << " " << b << endl; // va afisa 5 7
    SchimbaNumereIntreEle2(&a, &b);
    cout << a << " " << b << endl; // va afisa 7 5
    return 0;
}