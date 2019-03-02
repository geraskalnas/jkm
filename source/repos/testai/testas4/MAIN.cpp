#include<iostream>

using namespace std;

int getX(int a, int b, int c) {
	int x;
	if (a <= b) {
		if (b > c) {
			x = c;
		}
		else x = b;
	}
	else x = a;
	return x;
}

int main(void){
	int a, b, c, x;
	int t;
	int arr[3][3] = { {10, 8, 7}, {7, 10, 8}, {8, 8, 10} };
	//cout << "Iveskite  a, b, c: ";
	//cin >> a >> b >> c; cin.ignore();
	for (int i = 0; i < 3; i++) {
		cout << "a: " << arr[i][0] << " b: " << arr[i][1] << " c: " << arr[i][2] << endl;
		a = arr[i][0];
		b = arr[i][1];
		c = arr[i][2];
		x = getX(a, b, c);
		cout << "x: " << x << endl;
	}
	
	//x=getX(a, b, c);

	//cout << "x" << x << endl;
	cin >> t;
	return 0;
}