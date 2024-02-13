#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cout << "Program wypisuje liczby pierwsze od 2 do n(liczba podana przez uzytkownika\n"; //sito erastotenesa - wyrzucanie ze zbioru liczb, które są podzielnie przez liczby od 2 do sqrt(n)
    cout << "Podaj n\n";
    cin >> n;
    
    vector<int> tab(n + 1, 1);

    int pierw = sqrt(n);
    for (int j = 2; j <= pierw; j++) {
        if (tab[j] == 1) {
            for (int i = j * j; i <= n; i += j) {
                tab[i] = 0;
            }
        }
    }
    cout << "liczby pierwsze \n";
    for (int i = 2; i <= n; i++) {
        if (tab[i] == 1) {
            cout << i << " ";
        }
    }
}

