#include <iostream>
#include<math.h>

namespace tools {//sukuriau pats
	int intSize(int x)//suzino skaiciaus dydi t. y. kiek skaitmenu
	{
		int mo, y, i = 1;
		while (true) {
			mo = pow(10, i);
			y = x / mo;
			if (y < 1) {
				return 1;
			}
			if (y < 10) {
				return i + 1;
			}
			i++;
		}
	}
	int getIntFrom(int x, int choosen, int len)//paima skaitmeny is skaiciaus ir skaiciaus indeksas prasideda nuo 1
	{
		int mo, y, z;
		for (int i = 0; i < choosen; i++) {
			mo = pow(10, len - i);
			y = x / mo;
			z = x - (y*mo);
		}
		mo = pow(10, len - choosen);
		y = z / mo;
		return y;
	}
}

using namespace std;
using namespace tools;

int test(int skc) {
	int a;
	int size = intSize(skc);
	int last = getIntFrom(skc, 1, size);//skaiciavimas prasideda nuo 1
	for (int index = 2; index <= size; index++) {
		a = getIntFrom(skc, index, size);
		if (last > a) {
			cout << index - 1 << "-asis skaicius " << last << " didesnis uz " << index << "-aji skaiciu " << a << endl;
			cout << "Nutraukiama" << endl;
			return 0;
		}
		cout << index - 1 << "-asis skaicius " << last << " mazesnis uz " << index << "-aji skaiciu " << a << endl;
		last = a;
	}
	return 1;
}

int main() {
	long int skc;
	cout << "Iveskite skaiciu: " << endl;
	cin >> skc; cin.ignore();

	int ans = test(skc);
	if (ans == 1) {
		cout << "Skaitmenu tvarka didejanti" << endl;
	}
	else {
		cout << "Skaitmenu tvarka nezinomas" << endl;
	}

	cin >> skc;
	return 0;
}