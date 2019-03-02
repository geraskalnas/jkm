#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	float sum = 0;

	float c = 1;
	float i = 1;

	bool t = 1;

	c = 1.0 / i;
	while (c >= 0.001) {
		if (t) {
			sum += c;
			t = false;
		}
		else {
			sum -= c;
			t = true;
		}

		cout << "1 / " << i << " = " << c << endl;

		i++;
		c = 1.0 / i;
	}
	cout << "suma be funkcijos: " << sum << endl;
	cout << "suma su funkcija: " << log(2) << endl;
	cout << "suma skiriasi: " << abs(sum - log(2)) << endl;
	while (true) {}
		return 0;
	}