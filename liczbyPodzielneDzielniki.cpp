#include <iostream>
using namespace std;

int main(){
	int a, b, ile;
	cout << "Program wypisuje wszystkie liczby z danego zakresu, podzielne przez zadane dzielniki\n Podaj poczatek zakresu: \n";
	cin >> a;
	cout << "Podaj koniec zakresu: \n";
	cin >> b;
	cout << "Podaj ilosc dzielnikow: \n";
	cin >> ile;
	int* tablica = new int[ile];
	cout << "Teraz po kolei podawaj dzielniki: \n";
	for (int i = 0; i < ile; i++)
	{
		cin >> tablica[i];
	}
	for (int j = 0; j < ile; j++)
	{
		cout << "\n \nWszystkie liczby podzielne przez " << tablica[j] << endl;
		for (int i = a; i <= b; i++)
		{
			if (i % tablica[j] == 0)
			{
				cout << " " << i << "";
			}
		}
	}
	delete[] tablica;
}