#include <iostream>

using namespace std;

int main() {
	int e, f, g, h;
	int a, b;
	bool aUsed = false;
	int tm;

	cout << "Iveskite e, f, g, h: ";
	cin >> e >> f >> g >> h; cin.ignore();


	for (; e <= f; e++) {
		for (tm = g; tm <= h; tm++) {
			if (e == tm) {
				if (aUsed) {
					b = e;
					cout << "a: " << a << " b: " << b << endl;
					cout << "Iveskite, bet koki skaiciu ir Enter noredami iseiti" << endl;
					cin >> tm; cin.ignore();
					return 0;
				}
				else if(!aUsed){
					a = e;
					aUsed = true;
				}
			}
		}
	}
	return 1;
}