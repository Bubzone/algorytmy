#include <iostream>
using namespace std;

int ObliczNWD(int a, int b) {
    while (a != b) {
        a < b ? b -= a : a -= b;
    }
    return a;
}
int main()
{
    int a, b, p;
    cout << "Program wyznacza wszystkie liczby wzglednie pierwsze z podanego przedzialu(a, b), dla zadanej liczby p\n Podaj a: "; // względnie pierwsze - gdy NWD == 1
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj p: ";
    cin >> p;
    cout << "Liczby wzglednie pierwsze z przedzialu (" << a << "," << b << ") dla liczby " << p << ": ";
    for (int i = a; i <= b; i++) {
        int NWD = ObliczNWD(p, i);
        if (NWD == 1) {
            cout << " " << i << " ";
        }
    }
}
