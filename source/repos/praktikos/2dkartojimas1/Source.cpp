#include <iostream>

using namespace std;

int main() {
	//k - kiek atsiliko
	//g - greitis
	//t-tigras
	//v-vilkas
	//m-mokytojas
	int kt, kv, km, gt, gv, gm;

	//k
	cout << "Tigras atsiliko: " << endl; cin >> kt;
	cout << "Vilkas atsiliko: " << endl; cin >> kv;
	cout << "Mokytojas atsiliko: " << endl; cin >> km;
	//g
	cout << "Tigro greitis: " << endl; cin >> gt;
	cout << "Vilko greitis: " << endl; cin >> gv;
	cout << "Mokytojo greitis: " << endl; cin >> gm;

	for (int i = 1; i <= 8; i++) {
		kt = kt - gt + 1;
		kv = kv - gv + 1;
		km = km - gm + 1;
	}
	cout << "Tigras ";
	if (kt > 0) { cout << "ne"; }
	cout << "pavijo" << endl;

	cout << "Vilkas ";
	if (kv > 0) { cout << "ne"; }
	cout << "pavijo" << endl;

	cout << "Mokytojas ";
	if (km > 0) { cout << "ne"; }
	cout << "pavijo" << endl;
	return 0;
}