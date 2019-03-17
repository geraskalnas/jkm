#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int abs(int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}

int main() {
	int t;

	ifstream fi("Duomenys.txt");
	ofstream fo("Rezultatai.txt");
	
	int n;
	fi >> n;

	int x, y;
	int xAsis = 0, yAsis = 0, centrasO=0, xNutoles = 0;
	for (int i = 0; i < n; i++) {
		fi >> x >> y;
		fo << left << setw(3) << i << setw(5) << x << y << endl;
		if (x == 0 && y != 0) {
			yAsis++;
		}
		else if (y == 0 && x != 0) {
			xAsis++;
			if (abs(x) > abs(xNutoles)) {
				xNutoles = x;
			}
		}
		else {
			centrasO++;
		}
	}
	fi.close();
	fo.close();

	cout << "Yra " << xAsis    << " tasku x asyje." << endl;
	cout << "Yra " << yAsis    << " tasku x asyje." << endl;
	cout << "Yra " << centrasO << " tasku x asyje." << endl;
	cout << "Labiausiai nutoles taskas nuo 0 0 x asyje yra " << xNutoles << " 0." << endl;

	cin >> t;
	return t;
}