// Trys lazdos
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;              //trijø lazdø ilgiai
	int n, i;              //lazdø rinkiniø skaièius, ciklo kintamasis
	
	cout << "Iveskite, kiek lazdu rinkiniu bus: ";
	cin >> n;
	for(i = 1; i <= n; i = i + 1) {
		cout << "Iveskite triju lazdu " << i << "-aji rinkini: ";
		cin >> a >> b >> c;
		cout << "Lazdos: " << a << " " << b << " " << c;
		if ((a + b > c) && (a + c > b) && (b + c > a)) { //ar trikampis ?
			if ((a == b) && (b == c)) cout << " - galima sudaryti lygiakrasti trikampi" << endl;
			else {
				if ((a == b) || (b == c) || (a == c)) cout << " - galima sudaryti lygiasoni trikampi" << endl;
				else cout << " - galima sudaryti ivairiakrasti trikampi" << endl;
			}
		}
		else cout << " - trikampio sudaryti negalima" << endl;
	}
	while (true) {}
	return 0;
}