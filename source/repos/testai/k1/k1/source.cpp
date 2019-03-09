#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void doIt() {
	int t;
	float summ=0;
	int count=0;
	float avg;
	ifstream fi("Duomenys.txt");
	ofstream fo("Rezultatai.txt");
	while (!fi.eof()) {
		fi >> t;
		summ += t;
		count++;
		fo << left << setw(3) << count << t << endl;
	}
	fi.close();
	fo.close();
	
	avg = summ / count;
	cout << "Vidutinis ugis: " << avg << endl;
	count = 0;
	ifstream ffi("Duomenys.txt");
	while (!ffi.eof()) {
		ffi >> t;
		if (t > avg) {
			count++;
		}
	}
	cout << count << " programuotju ugis didesnis uz vidutini." << endl;
}

int main() {
	int t;

	doIt();

	cin >> t;
	return 0;
}