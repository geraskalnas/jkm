#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int a, b, c;
	double d;
	double x1, x2;
	int t;

	cout << "Iveskite kvadratines lygties koeficientus a, b ir c: ";
	cin >> a >> b >> c;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	
	//diskriminanto tikrinimas
	d = b * b - 4 * a * c;
	if (d < 0) { cout << "Lygtis neturi realiu sprendiniu" << endl; }
	else if(d == 0){
		x1 = -b / (2 * a);
		cout << "Lygtis turi viena sprendini: x = " << x1 << endl;
	}
	else
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "Lygtis turi du sprendinius: x1 = " << x1 << " ir x2 = " << x2 << endl;
	}

	cin >> t; cin.ignore();
	return 0;
}