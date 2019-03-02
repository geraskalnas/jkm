#include <cmath>
#include <iostream>

using namespace std;

double atstumas(int x1, int y1, int x2, int y2) {
	return sqrt(((x1-x2)*(x1 - x2))+((y1-y2)*(y1 - y2)));
}

int main() {
	int x1, y1,
		x2, y2,
		x3, y3,
		x4, y4;
	cout << "Pirmos keturkampio virsunes koordinates:" << endl;
	cout << "x y:";
	cin >> x1 >> y1;
	cin.ignore();

	cout << "Antros keturkampio virsunes koordinates:" << endl;
	cout << "x y:";
	cin >> x2 >> y2;
	cin.ignore();

	cout << "Trecios keturkampio virsunes koordinates:" << endl;
	cout << "x y:";
	cin >> x3 >> y3;
	cin.ignore();

	cout << "Ketvirtosos keturkampio virsunes koordinates:" << endl;
	cout << "x y:";
	cin >> x4 >> y4;
	cin.ignore();


	int id = 0;
	double did = 0;
	double cur = 0;


	//krastines
	cur = atstumas(x1, y1, x2, y2);//pirma-antra
	if (did < cur) {
		did = cur;
		id=1;
	}
	cout << "Tarp 1-os ir 2-os virsuniu ilgis: " << cur << endl;

	cur = atstumas(x2, y2, x3, y3);
	if (did < cur) {
		did = cur;
		id=2;
	}
	cout << "Tarp 2-os ir 3-os ilgis virsuniu ilgis: " << cur << endl;

	cur = atstumas(x3, y3, x4, y4);
	if (did < cur) {
		did = cur;
		id=3;
	}
	cout << "Tarp 3-os ir 4-os  virsuniu ilgis: " << cur << endl;

	cur = atstumas(x4, y4, x1, y1);
	if (did < cur) {
		did = cur;
		id=4;
	}
	cout << "Tarp 4-os ir 1-os  virsuniu ilgis:" << cur << endl;


	//istrizaines
	cout << "Istrizainiu ilgis (abi vienodos)" << atstumas(x1, y1, x3, y3);


	//apdorojimas
	int krid1, krid2;
	krid1 = id;
	krid2 = krid1+1;
	if (krid2 == 5) {
		krid2 = 1;
	}
	cout << "Ilgiausia keturkampio krastine yra tarp " << krid1 << "-os ir " << krid2 << "-os virusuniu ilgis, kuris lygus=" << did << endl;


	cin >> x1;//nenutraukti programos
	return 0;
}