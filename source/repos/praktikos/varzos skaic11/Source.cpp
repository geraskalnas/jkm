#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,//grandin�s dali� skai�ius
		k,//vienos grandin�s dalies var�� skai�ius
		j, i;//ciklo kintamieji
	double L, //vienos grandin�s dalies laidumas
		rj,//vieno laidininko var�a
		R; //bendroji grandin�s var�a
	R = 0;
	wcout << "Kelios dalys sudaro elektros grandine? "; cin >> n;
	for
		(i = 1; i <= n; i = i + 1) {
		L = 0;
		wcout << "Laidininku skaicius grandines dalyje "; cin >> k;
		for
			(j = 1; j <= k; j = j + 1) {
			wcout << "Laidininko varza "; cin >> rj;
			L = L + 1 / rj;         //laidum� sumavimas
		}
		R = R + 1 / L;
	}
	wcout << "Bendroji grandines varza "
		<< setw(6) << fixed << setprecision(2) << R << endl;
	return 0;
}