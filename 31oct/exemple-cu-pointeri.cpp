#include <iostream>
using namespace std;

int StergeUltimaCifraDinNumarFaraAmpersant(int n)
{
    n = n / 10;
    return n;
}

int StergeUltimaCifraDinNumarCuAmpersant(int *n)
{
    *n = *n / 10;
    return *n;
}

int main()
{
    int n, m;
    cin >> n >> m; // citim 123 123
    StergeUltimaCifraDinNumarCuAmpersant(&n);
    cout << n; // asta va afisa 12
    StergeUltimaCifraDinNumarFaraAmpersant(m);
    cout << m; // asta va afisa 123

    // int n = 5;
    // cout << "Valoarea lui n este: " << n << endl;           // asta va afisa 5
    // cout << "Adresa lui n este: " << &n << endl;            // asta va afisa ceva o adresa: 0x16bc271b8
    // cout << "Valoarea adresei lui n este: " << *&n << endl; // asta va afisa 5 (echivalent cu prima)
    return 0;
}