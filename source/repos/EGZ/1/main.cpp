#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>

using namespace std;

int n4lygXasiai = 0;
int n4ilgiuSuma = 0;

int n4X1IIket = 0;
int n4Y1IIket = 0;
int n4X2IIket = 0;
int n4Y2IIket = 0;
int n4ilgisIIket = 0;

int n6ilgiuSuma = 0;

//Tarnybines funkcijos
int min(int a, int b) {
	if (a > b) {
		return b;
	}
	return a;
}
int max(int a, int b) {
	if (b > a) {
		return b;
	}
	return a;
}

//Atkarpos funkcijos
bool atLygXAsiai(int y1, int y2) {
	if (y1 == y2) {//atkarpa lygiagreti x asiai
		return true;
	}
	return false;
}
bool atKertaXAsi(int y1, int y2) {
	if (max(y1, y2) > 0 && min(y1, y2)<0) {//atkarpa kerta x asi
		return true;
	}
	return false;
}

//Kitos funkcijos
int ilgis(int x1, int y1, int x2, int y2) {
	return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
int trikPerimetras(int x1, int y1, int x2, int y2, int x3, int y3) {
	int AB, BC, CA;//1-2, 2-3, 3-1
	AB = ilgis(x1, y1, x2, y2);
	BC = ilgis(x2, y2, x3, y3);
	CA = ilgis(x3, y3, x1, y1);
	return AB + BC + CA;
}
int ketvirtis(int x, int y) {
	if      (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x < 0 && y < 0) {
		return 3;
	}
	else if (x > 0 && y < 0) {
		return 4;
	}
}

int main() {
	int t;//laikinas

	ifstream fi("Duomenys.txt");
	ofstream fo("Rezultatai.txt");

	int n;
	fi >> n;
	fo << "Pradiniai duomenys:" << endl;
	fo << "x1" << setw(5) << "y1" << setw(5) << "x2" << setw(5) << "y2" << setw(5) << "x3" << setw(5) << "y3" << setw(5) << "x4" << setw(5) << "y4" << endl;

	for (int i = 0; i < n; i++) {
		int x1, x2, x3=0, x4=0;
		int y1, y2, y3=0, y4=0;
		int type;//4-atkarpa, 6-trikampis, 8-keturkampis
		
		fi >> type;
		if (type == 4) {
			fi >> x1;
			fi >> y1;
			fi >> x2;
			fi >> y2;
			if(atLygXAsiai(y1, y2)) n4lygXasiai++;//jei atkarpa lygiagreti x asiai
			else if(atKertaXAsi(y1, y2)){//jei ne ir atkarpa kerta x asi
				n4ilgiuSuma+=ilgis(x1, y1, x2, y2);
			}
			
			t = ilgis(x1, y1, x2, y2);
			if (ketvirtis(x1, y1) == 2 && ketvirtis(x2, y2) == 2 && t > n4ilgisIIket) {
				n4ilgisIIket = t;
				n4X1IIket = x1;
				n4Y1IIket = y1;
				n4X2IIket = x2;
				n4Y2IIket = y2;
			}
		}
		else if (type == 6) {
			fi >> x1;
			fi >> y1;
			fi >> x2;
			fi >> y2; 
			fi >> x3;
			fi >> y3;
			if (y1 == 0) {
				n6ilgiuSuma+=trikPerimetras(x1, y1, x2, y2, x3, y3);
			}
		}
		else if (type == 8) {
			fi >> x1;
			fi >> y1;
			fi >> x2;
			fi >> y2;
			fi >> x3;
			fi >> y3; 
			fi >> x4;
			fi >> y4;
		}
		fo << left << setw(5) << x1 << setw(5) << y1 << setw(5) << x2 << setw(5) << y2 << setw(5) << x3 << setw(5) << y3 << setw(5) << x4 << y4 << endl;
	}
	fi.close();

	fo << "Atsakymai:" << endl;
	fo << "-- Yra " << n4lygXasiai << " atkarpos, kurios lygiagrecios X asiai;" << endl;
	fo << "-- Atkarpu, kurios kerta X asi, bendra suma: " << n4ilgiuSuma << ";" << endl;
	fo << "-- Ilgiausios atkarpos IL koordinates, kurios abu taskai yra II ketvirtyje(x<0 ir y>0): I(" << n4X1IIket << ", " << n4Y1IIket << "), L(" << n4X2IIket << ", " << n4Y2IIket << ");" << endl;
	fo << "-- Trikampiu, kuriu pirma virsune yra X asyje, perimetru suma: " << n6ilgiuSuma << "." << endl;
	fo.close();

	return 0;
}