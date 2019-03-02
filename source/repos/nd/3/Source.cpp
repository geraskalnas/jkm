#include <iostream>
#include <iomanip>//lentelems
#include <fstream>//failams
#include <cmath>

using namespace std;

double calcZ(int x, int y, int a) {
	double z = sin((a*x*x)+(sqrt(y-x)));
	return z;
}

int main() {
	//pagrindiniai duomenys
	int xp;
	cout << "Iveskite xp: ";
	cin >> xp; cin.ignore();

	int xg;
	cout << "Iveskite xg: ";
	cin >> xg; cin.ignore();

	int hx;
	cout << "Iveskite hx: ";
	cin >> hx; cin.ignore();

	/*
	//patikrinimas
	if (xp > x) {
		cout << "Klaida: xp turi buti mazesnis uz x arba lygus x" << endl;
		return 1;
	}
	if (xg < x) {
		cout << "Klaida: xg turi buti didesnis uz x arba lygus x" << endl;
		return 1;
	}
	*/

	//skaiciavimo duomenys
	int a, y;
	cout << "Iveskite a, y matematiniams skaiciavimams: ";
	cin >> a >> y; cin.ignore();


	ofstream fr("data.txt");
	fr << "Ivestis:" << endl;
	fr << left << setw(4) << "xp" << setw(8) << xp << endl;
	fr << left << setw(4) << "xg" << setw(8) << xg << endl;
	fr << left << setw(4) << "hx" << setw(8) << hx << endl;
	fr << left << setw(4) << "a"  << setw(8) << a  << endl;
	fr << left << setw(4) << "y"  << setw(8) << y  << endl;

	fr << "Isvestis:" << endl;
	fr << left << setw(4) << "x" << setw(8) << "z" << endl;
	for (int x = xp; x <= xg; x += hx) {
		//taigi
		int z = calcZ(x, y, a);
		fr << left << setw(4) << x << setw(8) << z << endl;
		cout << "x: " << x << "z: " << z << endl;
	}
	fr.close();

	return 0;
}
