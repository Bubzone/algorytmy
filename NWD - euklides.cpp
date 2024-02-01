#include <iostream>
using namespace std;

int ObliczNWD(int a, int b) // sposób: odejmowanie większej liczby od mniejszej, aż będą sobie równe
{
    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Program wylicza NWD dwoch podanych liczb!\n Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: \n";
    cin >> b;

    int NWD = ObliczNWD(a, b);
    cout << "NWD liczb " << a << " i " << b << " wynosi: " << NWD << endl;
}
