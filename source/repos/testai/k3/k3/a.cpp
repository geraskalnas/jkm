#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int didzID, didzR, mas;

void didziausias(int id, int val, int b=0) {
	if (didzR < val) {
		didzID = id;
		didzR = val;
		mas = b;
	}
}

int main() {
	int t;

	ifstream fi("Duomenys.txt");

	fi >> t;
	const int n = t;

	int ids[6], vals[6];

	int id, val;
	for (int i = 0; i < n; i++) {
		fi >> id >> val;
		ids[i] = id;
		vals[i] = val;
		didziausias(id, val);
	}
	fi.close();

	cout << "Geriausias pasirodes sportininkas:" << endl << "  id: " << didzID << endl << "  reiksme: " << didzR << endl;

	ofstream fo("Rezultatai.txt");
	cout << "Rusiavimas:" << endl;
	for (int a = 0; a < n; a++) {
		didzID = 0;
		didzR = 0;
		for (int b = 0; b < n; b++) {
			didziausias(ids[b], vals[b], b);
		}
		fo << left << "|" << setw(5) << didzID << didzR << "|" << endl;
		cout << a + 1 << ". " << didzID << didzR << endl;
		vals[mas] = 0;
	}
	fo.close();

	cin >> t;
	return t;
}