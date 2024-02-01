#include <iostream>
using namespace std;

int ObliczNWD(int a, int b) {
    while (a != b) {
        a < b ? b -= a : a -= b;
    }
    return a;
}
int WyznaczNWW(int a, int b) {
    int NWD = ObliczNWD(a, b);
    return a * b / NWD;
}
int main()
{
    int a, b;
    cout << "Program wyznacza NWW liczb podanych przez uzytkownika "; //sposób a*b/NWD(a,b)
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    int NWW = WyznaczNWW(a, b);
    cout << "NWW liczb " << a << " i " << b << "wynosi: " << NWW;

}
