//Darbas5
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n; // laidinink� skai�ius
	double rlaid; // laidininko var�a
	double r; // elektros grandin�s var�a
	int i; // �inomo kartojim� skai�iaus ciklo kintamasis

	ifstream fd("Darbas5.txt"); // paruo�iamas failas duomen� skaitymui

	fd >> n; // �vedama pirmoje failo eilut�je esanti skai�iaus n reik�m�
	r = 0;
	// �vedami kiti skai�iai. Skaityti baigiama, kai �vedama n reik�mi�
	for (i = 1; i <= n; i = i + 1) {
		fd >> rlaid;
		r = r + rlaid;
	}
	fd.close(); // duomen� failas u�veriamas

	cout << "Elektros grandines varza: " << r << endl;
	return 0;
}