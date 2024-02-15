#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    unsigned int n, p, q, x;
    cout << "Program wyznacza liczby pierwsze w zbiorze (1;n> algorytmem liniowym\nPodaj n: \n"; // Algorytm liniowy x = p^k * q  (zmiana p następuje gdy x z k=1 nie mieści się w zbiorze
    cin >> n;
    vector<int> tab(n + 1, 1);
    p = 2;
    while (p * p <= n) {
        q = p;
        while (p * q <= n) {
            x = p * q;
            while (x <= n) {
                tab[x] = 0;
                x = x * p;
            }
            while (tab[++q] == 0);
        }
        while (tab[++p] == 0);
    }
    cout << "Liczby pierwsze w zbiorze (1;" << n << ">: \n";
    for (int i = 2; i <= n ; i++) {
        if (tab[i] == 1) {
            cout << i << " \n";
        }
    }
}

