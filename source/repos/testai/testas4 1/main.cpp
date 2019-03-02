#include <iostream>

using namespace std;

int main(void) {
	int x, y, z, ats, t;
	cout << "Iveskite x, y, z: ";
	cin >> x >> y >> z;
	cin.ignore();

	if (x >= y) {
		if (y > z) {
			ats = z;
		}
		else ats = y;
	}
	else ats = x;
	cout << "ATS: " << ats << endl;
	cin >> t;
}