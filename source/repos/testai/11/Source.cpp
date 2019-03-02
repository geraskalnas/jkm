#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void writeAnswer(int a, int aType, int b, int bType);
void displayData(int x1, int y1, int x2, int y2, int xx1, int yy1, int xx2, int yy2);

int main(void) {
	bool t = false;
	int a = -1, b = -1;
	int typeA = -1;
	int typeB = -1;
	int x1, y1;
	int x2, y2;
	cout << "---Pirma atkarpa---" << endl;
	cout << "Iveskite Pirmos atkarpos pradzios koordinates x1, y1" << endl;
	cin >> x1 >> y1; cin.ignore();
	cout << "Iveskite Pimos atkarpos galu koordinates x2, y2" << endl;
	cin >> x2 >> y2; cin.ignore();

	int xx1, yy1;
	int xx2, yy2;
	cout << "---Antra atkarpa---" << endl;
	cout << "Iveskite Pirmos atkarpos pradzios koordinates xx1, yy1" << endl;
	cin >> xx1 >> yy1; cin.ignore();
	cout << "Iveskite Pirmos atkarpos galu koordinates xx2, yy2" << endl;
	cin >> xx2 >> yy2; cin.ignore();

	if (y1 != y2 || yy1 != yy2) {
		cout << "Tieses nelygriagrecios" << endl;
		return 1;
	}
	cout << "Tieses lygriagrecios" << endl;

	if (y1 != yy1) {
		cout << "Tieses nesusijungia" << endl;
		return 2;
	}
	cout << "Tieses susijungia" << endl;

	if (x2 >= xx1 && x2 <= xx2) {
		cout << "Tieses turi bendru tasku (5)" << endl;
		if (x2 == xx1 || x2 == xx2) {
			if (t) {
				b = x2;
				typeB = 1;
			}
			else {
				a = x2;
				typeA = 1;
				t = true;
			}
		}
		else {
			if (t) {
				b = x2;
				typeB = 0;
			}
			else {
				a = x2;
				t = true;
				typeA = 0;
			}
		}
	}
	else if (x1 >= xx2 && x1 <= xx1) {
		cout << "Tieses turi bendru tasku (4)" << endl;
		if (x1 == xx2 || x2 == xx1) {
			if (t) {
				b = x1;

				typeB = 1;
			}
			else {
				a = x1;
				typeA = 1;
				t = true;
			}
		}
		else {
			if (t) {
				b = x1;
				typeB = 0;
			}
			else {
				a = x1;
				t = true;
				typeA = 0;
			}
		}
	}
	else if (xx2 >= x1 && x2 <= x2) {
		cout << "Tieses turi bendru tasku (3)" << endl;
		if (xx2 == x1 || x2 == x2) {
			if (t) {
				b = xx2;
				typeB = 1;
			}
			else {
				a = xx2;
				t = true;
				typeA = 1;
			}
		}
		else {
			if (t) {
				b = xx2;
				typeB = 0;
			}
			else {
				a = xx2;
				t = true;
				typeA = 0;
			}
		}
	}
	else if (xx1 >= x2 && xx1 <= x1) {
		cout << "Tieses turi bendru tasku (4)" << endl;
		if (xx1 == x2 || xx1 == x1) {
			if (t) {
				b = xx1;
				typeB = 1;
			}
			else {
				a = xx1;
				typeA = 1;
				t = true;
			}
		}
		else {
			if (t) {
				b = xx1;
				typeB = 0;
			}
			else {
				a = xx1;
				t = true;
				typeA = 0;
			}
		}
	}
	else { return 3; }

	cout << "Data: " << endl;
	displayData(x1, y1, x2, y2, xx1, yy1, xx2, yy2);


	writeAnswer(a, typeA, b, typeB);

	return 0;
}

void writeAnswer(int a, int aType, int b, int bType) {
	//type=0 -> taskas yra tarp kitu dvieju tasku
	//type=1 -> taskas lygus kazkuriam kitam taskui
	ofstream fr("Atkarpa.txt");
	fr << "Susikerta:" << endl;
	if (aType == 1) {
		fr << "  " << a << endl;
	}
	if (bType == 1) {
		fr << "  " << b << endl;
	}
	fr << "Yra tarp kitu dvieju tasku:" << endl;
	if (aType == 0) {
		fr << "  " << a << endl;
	}
	if (bType == 0) {
		fr << "  " << b << endl;
	}
	fr.close();
}
void displayData(int x1, int y1, int x2, int y2, int xx1, int yy1, int xx2, int yy2) {
	cout << left << setw(4) << "x1" << setw(8) << x1 << endl;
	cout << left << setw(4) << "y1" << setw(8) << y1 << endl;
	cout << left << setw(4) << "x2" << setw(8) << x2 << endl;
	cout << left << setw(4) << "y2" << setw(8) << y2 << endl;

	cout << left << setw(4) << "xx1" << setw(8) << xx1 << endl;
	cout << left << setw(4) << "yy1" << setw(8) << yy1 << endl;
	cout << left << setw(4) << "xx2" << setw(8) << xx2 << endl;
	cout << left << setw(4) << "yy2" << setw(8) << yy2 << endl;

}