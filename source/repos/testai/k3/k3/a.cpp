#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int id, idArr, val;
int spVal=0, spArrID, spID;

ifstream fi("Duomenys.txt");

void didziausias() {
	int m1, m2, m3, m4, m5, m6;
	fi >> id >> m1 >> m2 >> m3 >> m4 >> m5 >> m6;
	int arr[] = { m1, m2, m3, m4, m5, m6 };
	for (int i = 0; i < 6; i++) {
		if (arr[i] > val) {
			idArr = i;
			val = arr[i];
		}
	}
}

int main() {
	int t;

	fi >> t;
	const int n = t;

	int ids[50], vals[50];

	for (int i = 0; i < n; i++) {
		didziausias();
		ids[i] = id;
		vals[i] = val;
		if (spVal < val) {
			spVal = val;
			spID = id;
			spArrID = idArr;
		}
		id = 0;
		val = 0;
	}

	cout << "Geriausias pasirodes sportininkas:" << endl << "  id: " << spID << endl << "  reiksme: " << spVal << endl;
	
	ofstream fo("Rezultatai.txt");
	cout << "Rusiavimas:" << endl;
	for (int a = 0; a < n; a++) {
		spVal = 0;
		spID = 0;
		spArrID = 0;
		for (int b = 0; b < n; b++) {
			if (spVal < vals[b]) {
				spVal = vals[b];
				spID = ids[b];
				spArrID = b;
			}
		}
		fo << left << "|" << setw(5) << spID << spVal << "|" << endl;
		cout << left << a + 1 << ". " << spID << " " << spVal << endl;
		vals[spArrID] = 0;
	}
	fo.close();
	

	cin >> t;
	return t;
}