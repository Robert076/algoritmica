#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("sum.in");   // declar "fin" de tip ifstream, care citeste din fisierul sum.in
ofstream fout("sum.out"); // declar "fout" de tip ofstream, care citeste din fisierul sum.out

int main()
{
    int a, b;
    fin >> a >> b; // citire din fisier
    // cin >> a >> b; // citire de la tastatura
    fout << a + b; // afisare in fisier
    // cout << a + b; // afisare in consola
    return 0;
}