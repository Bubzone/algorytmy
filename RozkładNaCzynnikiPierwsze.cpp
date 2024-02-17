#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int liczba, i = 2;

    cout << "Program rozbija liczbe na czynniki pierwsze!\n Podaj liczbe: \n";
    cin >> liczba;
    int a = liczba;
    cout << "liczba " << liczba << " rozbija sie nas takie czynniki: \n";
    while (a != 1 && i <= sqrt(liczba)) {
        if (a % i == 0) {
            cout << i << " ";
            a = a / i;
            i = 2;
        }
        else {
            i++;
        }
    }
    if (a != 1) {
        cout << a;
    }
}


