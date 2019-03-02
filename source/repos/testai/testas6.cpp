// Example program
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream fd("Rezultatai.txt"); // paruoðiamas failas duomenø skaitymui

	cout << "iveskite trizenklius skaiciu, atskiriant tarpais: ";
	int a, b, c;
	cin >> a >> b >> c; cin.ignore();
	cout << "Iveskite x" << endl;
	int x;
	cin >> x; cin.ignore();

	int t, n=0;

	t = a / 100;
	if (t % 2 == 0 && a % x != 0 && a <= 999 && a >= 100) {
		fd << a << endl;
		n++;
	}

	t = b / 100;
	if (t % 2 == 0 && b % x != 0 && b <= 999 && b >= 100) {
		fd << b << endl;
		n++;
	}

	t = c / 100;
	if (t % 2 == 0 && c % x != 0 && c <= 999 && c >= 100) {
		fd << c << endl;
		n++;
	}

	fd.close();

	cout << "Tokiu skaiciu, kurie yra trizenkliai ir ju pirmas skaitmuo lyginis ir dalinas is x, yra: " << n << endl;
	cout << "Iveskite, bet koki skaiciu irspauskite enter, jei norite iseiti" << endl;
	cin >> t; cin.ignore();
	return 0;
}