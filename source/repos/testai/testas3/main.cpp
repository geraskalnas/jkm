#include<iostream>

using namespace std;

int nCalc(int n);
int main(void) {
	int n1, n2;
	int a1, a2;
	int t;

	cout << "Iveskite kiek pirma figura turi kampu: ";//jokio endl
	cin >> n1; cin.ignore();
	cout << endl;

	cout << "Iveskite kiek antra figura turi kampu: ";//jokio endl
	cin >> n2; cin.ignore();
	cout << endl;

	//Programa neapsaugota nuo 0, 1, 2

	a1 = nCalc(n1);
	a2 = nCalc(n2);

	cout << "Pirmo figuros vieno kampo dydis: " << a1 << endl;
	cout << "Antros figuros vieno kampo dydis: " << a2 << endl;

	cout << "Iveskite bet ka, jei norite isseiti" << endl;
	cin >> t; cin.ignore();
	exit();
}
int nCalc(int n) {
	return ((n - 2) * 180) / n;
}