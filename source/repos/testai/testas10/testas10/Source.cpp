#include <iostream>
#include <iomanip>
#include <fstream>
//#include <cmath>

using namespace std;

double getY(double x, double a, double b);
void displayTable(int state = 0, double x = 0, double y = 0) {
	switch (state) {
	case 0:
		cout << "--------------------" << endl;
		cout << left << setw(3) << "x" << setw(8) << "y" << endl;
		break;
	case 1:
		cout << left << setw(3) << x << setw(8) << y << endl;
		break;
	case 2:
		cout << "--------------------" << endl;
		break;
	}
}


int main(void) {
	double x;
	double y;
	double a, b;
	double p, g, h;
	double r;

	cout << "Iveskite x: " << endl;
	cin >> x; cin.ignore();
	cout << "Iveskite a, b: " << endl;
	cin >> a >> b; cin.ignore();
	cout << "Iveskite p, g, h: " << endl;
	cin >> p >> g >> h; cin.ignore();
	cout << "Iveskite r: " << endl;
	cin >> r; cin.ignore();


	double xp = x * p;
	double xg = x * g;
	double hx = x * h;

	ofstream fr("lentele");
	int rmaz = 0;
	
	displayTable(0);
	for (double i = xp; i <= xg; i += hx) {
		y = getY(i, a, b);
		displayTable(1, i, y);
		fr << left << setw(3) << i << setw(8) << y << endl;
		if (y < r) rmaz++;
	}
	displayTable(2);
	fr.close();

	cout << endl << rmaz << " y reiksmes buvo mazesnes uz R" << endl;
	while (true) {}
	return 0;
}

double getY(double x, double a, double b) {
	return (x + a)*cos(b*x);
}
