#include <iostream>

using namespace std;

int main()
{
    int paz=0;
    int sum=0;
    int count=0;
    cout << "Iveskite pazymius atskirdami juos tarpais arba <enter>. Norint pabaigti vesti pazymius iveskite -1" << endl;
    while(paz!=-1){
        cin >> paz; cin.ignore();
        sum+=paz;
        count++;
    }
    sum++;//nes -1 buvo paskutinis
    count--;//ir yra nereikalingas vidurkiui
    cout << "Pazymiu suma: " << sum << endl;
    cout << "Pazymiu kiekis: " << count << endl;
    cout << "--------------" << endl  << "Vidurkis: " << sum/count << endl << "--------------" << endl;
}
