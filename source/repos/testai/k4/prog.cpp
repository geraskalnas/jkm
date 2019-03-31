#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int x2, y2;
int x4, y4;

int length, width, area;

int abs(int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}
void findXY(int x1, int y1, int x3, int y3) {
	x2 = x3;
	y2 = y1;
	x4 = x1;
	y4 = y3;
}
void findArea(int x1, int x2, int y1, int y4) {
	length = abs(x1 - x2);
	width = abs(y1 - y4);
	area = length * width;
}

int main() {
	int t;

	int x1, y1;
	int x3, y3;
	ifstream fi("Duomenys.txt");
	fi >> x1 >> y1 >> x3 >> y3;
	fi.close();

	findXY(x1, y1, x3, y3);

	findArea(x1, x2, y1, y4);

	ofstream fo("Rezultatai.txt");
	fo << "x" << setw(5) << "y" << endl;
	fo << x1 << setw(5) << y1 << endl;
	fo << x2 << setw(5) << y2 << endl;
	fo << x3 << setw(5) << y3 << endl;
	fo << x4 << setw(5) << y4 << endl;
	fo << "Ilgis:" << endl;
	fo << length << endl;
	fo << "Plotis:" << endl;
	fo << width << endl;
	fo << "Plotas:" << endl;
	fo << area << endl;
	fo.close();

	cin >> t;
	return t;
}