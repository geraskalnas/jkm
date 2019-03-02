#include <iostream>

using namespace std;

int main()
{
	int sk, a, b, c, d;
	cout << "Vampyro skaièiai: " << endl;
	for
		(sk = 1000; sk <= 9999; sk = sk + 1) {
		a = sk / 1000;
		b = (sk / 100) % 10;
		c = (sk / 10) % 10;
		d = sk % 10;
		if
			(sk == (a * 10 + b) * (c * 10 + d))
			cout << sk << " = " << a << b << " * " << c << d << endl;
		if
			(sk == (b * 10 + a) * (c * 10 + d))
			cout << sk << " = " << b << a << " * " << c << d << endl;
		if
			(sk == (a * 10 + b) * (d * 10 + c))
			cout << sk << " = " << a << b << " * " << d << c << endl;
		if	(sk == (b * 10 + a) * (d * 10 + c))
			cout << sk << " = " << b << a << " * " << d << c << endl;
		if
			(sk == (a * 10 + c) * (b * 10 + d))
			cout << sk << " = " << a << c << " * " << b << d << endl;
		if
			(sk == (c * 10 + a) * (b * 10 + d))
			cout << sk << " = " << c << a << " * " << b << d << endl;
		if
			(sk == (a * 10 + c) * (d * 10 + b))
			cout << sk << " = " << a << c << " * " << d << b << endl;
		if
			(sk == (c * 10 + a) * (d * 10 + b))
			cout << sk << " = " << c << a << " * " << d << b << endl;
		if
			(sk == (a * 10 + d) * (b * 10 + c))
			cout << sk << " = " << a << d << " * " << b << c << endl;
		if
			(sk == (d * 10 + a) * (b * 10 + c))
			cout << sk << " = " << d << a << " * " << b << c << endl;
		if
			(sk == (a * 10 + d) * (c * 10 + b))
			cout << sk << " = " << a << d << " * " << c << b << endl;
		if
			(sk == (d * 10 + a) * (c * 10 + b))
			cout << sk << " = " << d << a << " * " << c << b << endl;
	}
	while (true) {}
	return 0;
}
