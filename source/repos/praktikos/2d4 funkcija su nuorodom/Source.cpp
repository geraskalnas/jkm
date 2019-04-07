#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

const char DuomFailVard[] = "Duomenys.txt";
const char RezuFailVard[] = "Rezultatai.txt";

void Laikas(int v1, int m1, int v2, int m2, int & v3, int & m3);

int main() {
	int n;
	int v1, m1;
	int v2, m2;
	int v3, m3;

	ifstream fi(DuomFailVard);
	ofstream fo(RezuFailVard);
	fi >> n;
	for (int i = 0; i < n; i++) {
		fi >> v1 >> m1 >> v2 >> m2;
		Laikas(v1, m1, v2, m2, v3, m3);
		fo << v3 << " " << m3 << endl;
	}
	fi.close();
	fo.close();

	return 0;
}

void Laikas(int v1, int m1, int v2, int m2, int & v3, int & m3) {
	v3 = (v1 * 60 + m1 + v2 * 60 + m2) / 60;
	m3 = (v1 * 60 + m1 + v2 * 60 + m2) % 60;
}