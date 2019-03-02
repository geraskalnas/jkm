// Darbas10
#include <iostream>

using namespace std;
int main()
{
	double xc, yc,// taikinio centro koordinates
		r1, r2, r3, r4;// taikinio apskritimu spinduliai didejimo tvarka
	int t1, t2, t3, t4;// skiriami taskai atsizvelgiant i apskritimus
	double x, y;//streles pataikymo tasko koordinates
	float ats;
	float tiks=0.00001;
	// Duomenu skaitymas
	cout << "Taikinio centro koordinate      xc = "; cin >> xc;
	cout << "Taikinio centro koordinate      yc = "; cin >> yc;
	cout << "Pirmojo apskritimo spindulys    r1 = "; cin >> r1;
	cout << "Pirmojo apskritimo taskai       t1 = "; cin >> t1;
	cout << "Antrojo apskritimo spindulys    r2 = "; cin >> r2;
	cout << "Antrojo apskritimo taskai       t2 = "; cin >> t2;
	cout << "Treciojo apskritimo spindulys   r3 = "; cin >> r3;
	cout << "Treciojo apskritimo taskai      t3 = "; cin >> t3;
	cout << "Ketvirtojo apskritimo spindulys r4 = "; cin >> r4;
	cout << "Ketvirtojo apskritimo taskai    t4 = "; cin >> t4;
	cout << "Streles koordinate               x = "; cin >> x;
	cout << "Streles koordinate               y = "; cin >> y;

	ats = sqrt((xc - x) * (xc - x) + (yc - y) * (yc - y));
	cout << "Pataikymo tasko atstumas iki taikinio centro: " << ats << endl;
	
	cout << "Skaiciavimu tikslumas: " << tiks << endl;
	while (true) {};
	return 0;
}
