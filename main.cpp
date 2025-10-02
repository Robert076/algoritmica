// #include <iostream>
// using namespace std;

// int main()
// {
//     int nr1, nr2 = 1000001, s = 0; // nr1 e ultimul element, nr2 e penultimul
//     int ok = 1;
//     while (cin >> nr1 && ok == 1)
//     {
//         if (nr1 == nr2)
//         {
//             s = s + nr1;
//             ok = 0;
//         }
//         else
//         {
//             s = s + nr1;
//             nr2 = nr1;
//         }
//     }

//     cout << s;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int nr1, nr2 = 1000001, s = 0; // nr1 e ultimul element, nr2 e penultimul
    while (cin >> nr1)
    {
        if (nr1 == nr2)
        {
            s = s + nr1;
            break;
        }
        else
        {
            s = s + nr1;
            nr2 = nr1;
        }
    }

    cout << s;
    return 0;
}