#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char fni[] = "Duomenys.txt";
const char fno[] = "Rezultatai.txt";

int main() {
	int n; //programuotoju skaicius turnyre
	int us=0, ds=0; //kiek is viso sprende uzdaviniu ir kelias dienas sprende
	int up;//kiek isprende vienas
	int d;//kiek paru dirbo vienas
	int p;//kiek uzdaviniu per dienas isprende vienas
	
	double uv;//avg uzdaviniu per diena


	ifstream fi(fni);
	ofstream fo(fno);

	fi >> n;
	for (int i = 1; i <= n; i++) {
		fi >> d;
		up = 0;
		for (int j = 1; j <= d; j++) {
			fi >> p;
			up += p;
		}
		fo << up << endl;
		ds += d;
		us += up;
	}
	fi.close();

	fo << us << endl;
	uv = (double) us / ds;
	fo << fixed << setprecision(1) << uv << endl;
	fo.close();

	return 0;
}