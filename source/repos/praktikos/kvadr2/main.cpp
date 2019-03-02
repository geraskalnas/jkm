#include<iostream>
#include<cmath>

using namespace std;

double lygiakrascioTrikampioP(double a);
double apskritimoP(double r);
int main(void) {
	double a, b;
	double visasP, bruksnysP, baltasP;
	int t;

	cout << "Iveskite a, b: ";
	cin >> a >> b; cin.ignore();
	cout << endl;

	visasP = a * b;
	baltasP = (apskritimoP(a/2) / 2) + lygiakrascioTrikampioP(a);
	bruksnysP = visasP - baltasP;

	cout << "Visas plotas: " << visasP << endl;
	cout << "Uzbruksniuotas plotas: " << bruksnysP << endl;
	cout << "Neuzbruksniuotas plotas: " << baltasP << endl;

	cin >> t; cin.ignore();
	return 0;
}
double lygiakrascioTrikampioP(double a) {
	double b;
	b = a / 2;
	return b * a;// neidejau b*a/2 nes tai nera statusis trikampis // kadangi lygiakrastis trikampis = statusisTrikampis*2 tai /2 nereikalingas
}
double apskritimoP(double r) {
	double S;
	S = 3.14*(r*r);
	return S;
}