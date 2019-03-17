#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

double plotas(double a, double b) {
	return a * b;
}
double dangosKaina(double p, double kaina) {
	return 1.03*p*kaina;
}

int main() {
	int n;
	double p, dk;
	double s = 0;
	double a, b, k;

	ifstream fi("Duomenys.txt");
	fi >> n;
	for (int i = 0; i < n; i++) {
		fi >> a >> b >> k;
		p = plotas(a, b);
		//cout << fixed << setprecision(2) << p << endl;
		dk = dangosKaina(p, k);
		cout << fixed << setprecision(2) << dk << endl;
		s += dk;
	}
	fi.close();
	cout << fixed << setprecision(2) << s << endl;

	ofstream fo("Rezultatai.txt");
	fo << fixed << setprecision(2) << s << endl;
	fo.close();

	int t;
	cin >> t;
	return t;
}