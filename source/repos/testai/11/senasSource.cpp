#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void writeData(int x1, int y1, int x2, int y2, int xx1, int yy1, int xx2, int yy2);
void displayData(int x1, int y1, int x2, int y2, int xx1, int yy1, int xx2, int yy2);

int main(void) {
	int x1, y1;
	int x2, y2;
	cout << "---Pirma atkarpa---" << endl;
	cout << "Iveskite Pimos atkarpos pradzios koordinates x1, y1" << endl;
	cin >> x1 >> y1; cin.ignore();
	cout << "Iveskite Pimos atkarpos galu koordinates x2, y2" << endl;
	cin >> x2 >> y2; cin.ignore();

	int xx1, yy1;
	int xx2, yy2;
	cout << "---Antra atkarpa---" << endl;
	cout << "Iveskite Pimos atkarpos pradzios koordinates xx1, yy1" << endl;
	cin >> xx1 >> yy1; cin.ignore();
	cout << "Iveskite Pimos atkarpos galu koordinates xx2, yy2" << endl;
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
		cout << "Tieses turi bendru tasku" << endl;
		
	}
	else if (x1 >= xx2 && x1 <= xx1) {
		cout << "Tieses turi bendru tasku" << endl;
		
	}
	else if (xx2 >= x1 && x2 <= x2) {
		cout << "Tieses turi bendru tasku" << endl;
		
	}
	else if (xx1 >= xx2 && xx1 <= x1) {
		cout << "Tieses turi bendru tasku" << endl;
		
	}
	else { return 3; }

	cout << "Data: " << endl;
	displayData(x1, y1, x2, y2, xx1, yy1, xx2, yy2);

	writeData(x1, y1, x2, y2, xx1, yy1, xx2, yy2);

	return 0;
}

void writeData(int x1, int y1, int x2, int y2, int xx1, int yy1, int xx2, int yy2) {
	ofstream fr("Atkarpa.txt");
	fr << left << setw(4) << "x1" << setw(8) << x1 << endl;
	fr << left << setw(4) << "y1" << setw(8) << y1 << endl;
	fr << left << setw(4) << "x2" << setw(8) << x2 << endl;
	fr << left << setw(4) << "y2" << setw(8) << y2 << endl;

	fr << left << setw(4) << "xx1" << setw(8) << xx1 << endl;
	fr << left << setw(4) << "yy1" << setw(8) << yy1 << endl;
	fr << left << setw(4) << "xx2" << setw(8) << xx2 << endl;
	fr << left << setw(4) << "yy2" << setw(8) << yy2 << endl;
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
