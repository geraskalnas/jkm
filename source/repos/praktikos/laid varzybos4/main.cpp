//Darbas5
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n; // laidininkø skaièius
	double rlaid; // laidininko varþa
	double r; // elektros grandinës varþa
	int i; // þinomo kartojimø skaièiaus ciklo kintamasis

	ifstream fd("Darbas5.txt"); // paruoðiamas failas duomenø skaitymui

	fd >> n; // ávedama pirmoje failo eilutëje esanti skaièiaus n reikðmë
	r = 0;
	// Ávedami kiti skaièiai. Skaityti baigiama, kai ávedama n reikðmiø
	for (i = 1; i <= n; i = i + 1) {
		fd >> rlaid;
		r = r + rlaid;
	}
	fd.close(); // duomenø failas uþveriamas

	cout << "Elektros grandines varza: " << r << endl;
	return 0;
}