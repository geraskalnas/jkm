#include<iostream>
#include<string>

using namespace std;


int main() {
	while (true) {
		int sk[] = { 100, 50, 20, 10, 5, 2, 1 };
		int ii, g;
		int k100 = 0, k50 = 0, k20 = 0, k10 = 0, k5 = 0, k2 = 0, k1 = 0;//negi butina?
		cout << "Iveskite graza: ";
		cin >> g; cin.ignore();
		cout << "Skaidymas" << endl;
		while (g > 0) {
			for (int i = 0; i < sizeof(sk); i++) {
				ii = sk[i];
				if (ii < g) {
					cout << ii << " & ";
					g -= ii;
					switch (ii) {
					case 100:
						k100++;
						break;
					case 50:
						k50++;
						break;
					case 20:
						k20++;
						break;
					case 10:
						k10++;
						break;
					case 5:
						k5++;
						break;
					case 2:
						k2++;
						break;
					case 1:
						k1++;
						break;
					}
					break;
				}
				else if (ii == g) {
					g = 0;
					cout << ii << endl;
					switch (ii) {
					case 100:
						k100++;
						break;
					case 50:
						k50++;
						break;
					case 20:
						k20++;
						break;
					case 10:
						k10++;
						break;
					case 5:
						k5++;
						break;
					case 2:
						k2++;
						break;
					case 1:
						k1++;
						break;
					}
					break;
				}
			}
		}
		cout << "Taigi" << endl;
		cout << "Po 100 Lt: " << "-----> " << k100 << endl;
		cout << "Po 50 Lt:  " << "-----> " << k50 << endl;
		cout << "Po 20 Lt:  " << "-----> " << k20 << endl;
		cout << "Po 10 Lt:  " << "-----> " << k10 << endl;
		cout << "Po 5 Lt:   " << "-----> " << k5 << endl;
		cout << "Po 2 Lt:   " << "-----> " << k2 << endl;
		cout << "Po 1 Lt:   " << "-----> " << k1 << endl;

		//cout << "I do it :)" << endl;//bet su algoritmais truputi pracsiau
	}
}