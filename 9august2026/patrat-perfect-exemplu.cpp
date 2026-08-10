#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    if (sqrt(n) == floor(sqrt(n)))
    {
        cout << "n este patrat perfect";
    }
    else
    {
        cout << "n nu este patrat perfect";
    }
    int i = n;
    // while()
    // {
    //     if(sqrt(i) == floor(sqrt(i)))
    //     {
    //         cout << i;
    //     }
    //     i = i + n;
    // }
    return 0;
}