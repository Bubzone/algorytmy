// test.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void wypiszParzyste(int a, int b)
{
    if (a % 2 == 1) {
        a++;
    }

    cout << "liczby parzyste: \n";

    for (int i = a; i <= b; i += 2) {
        cout << i << " ";
    }
}
int main()
{
    int a, b;
    cout << "Program wypisuje liczby parzyste podane przez uzytkownika!\n Podaj liczbe rozpoczynajaca przedzial: \n";
    cin >> a;
    cout << "Podaj liczbe konczaca przedzial\n";
    cin >> b;
    wypiszParzyste(a, b);

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
