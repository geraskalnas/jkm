// Darbas 2
#include <iostream>

using namespace std;

int main (){
	int ilgis, plotis;  // kambario matmenys
	int plotas;         // kambario grindø plotas
	
	double m2kaina;       // plyteliø 1 kvadratinio metro kaina
	double psuma;         // pinigø sumcout << "Programa darba pradejo." << endl;
	
	cout << "Iveskite kambario ilgi: ";
	cin >> ilgis;
	cout << "Iveskite kambario ploti: ";
	cin >> plotis;  plotas = ilgis * plotis;
	cout << "Kambario grindu plotas: "  << plotas << endl;

	cout << "Iveskite plyteliu 1 kvadratinio metro kaina: ";
	cin >> m2kaina;
	psuma = 1.05*plotas*m2kaina;
	cout << "Pinigu suma, kuria reikia sumoketi: " << psuma << endl;

	cout << "Programa darba baige.";
	return 0;
}