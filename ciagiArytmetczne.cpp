#include <iostream>
#include <string.h>
using namespace std;

int main() {
	float a, r, wynik;
	int n;
	string czyWszystkie;
	cout << "Program wyznacza n-ty wyraz ciągu arytmetycznego - uzytkownik wybiera, czy ma wyswietlac każdy kolejny az do n-tego\n Podaj pierwszy wyraz ciagu:\n";
	cin >> a;
	cout << "Podaj roznice: \n";
	cin >> r;
	cout << "Podaj ktory wyraz ciagu chcesz wyswietlic:\n";
	cin >> n;
	cout << "Czy chcesz aby program wyswietlil wszystkie wyrazy po kolei?(t/n)\n";
	cin >> czyWszystkie;
	if (czyWszystkie == "t")
	{
		for (int i = 0; i <= n-1; i++)
		{
			wynik = a - (i * r);
			cout << i+1 << ". wyraz ciagu: " << wynik << endl;
		}
	}
	else if (czyWszystkie == "n")
	{
		wynik = a - ((n - 1) * r);
		cout << n << ". wyraz ciagu: " << wynik << endl;
	}
}