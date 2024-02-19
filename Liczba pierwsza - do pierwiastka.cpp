#include <iostream>
#include <math.h>
using namespace std;

bool czyPierwsza(int a)
{
	for (int j = 2; j < sqrt(a); j++) { // przedtem były sprawdzane wszystkie liczby od 2 do a - tutaj tylko do pierwiastka a
		if (a % j == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	int ile;
	cout << "Program wypisuje n liczb pierwszych\n Podaj ile liczb pierwszych chesz: "; // od poprzednich programów różni się sposobem sprawdzania czy liczba jest pierwsza
	cin >> ile;
	cout << ile << " liczb(-y) pierwszych(-e): \n 2 ";

	int i = 0;
	if (ile == 1) {
		return 0;
	}
	else {
		i = 1;
	}
	int j = 2;
	for (i; i < ile; i++) {
		bool czyJestPierwsza = false;
		while (czyJestPierwsza != true) {
			j++;
			czyJestPierwsza = czyPierwsza(j);
		}
		cout << " " << j << " ";
	}
}