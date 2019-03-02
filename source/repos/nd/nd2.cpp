#include <iostream>
#include <cmath>

namespace tools {
    int intSize(int x)
    {
        int mo, y, i = 1;
        while (true) {
            mo = pow(10, i);
            y = x / mo;
            if (y < 1) {
                return 1;
            }
            if (y < 10) {
                return i + 1;
            }
            i++;
        }
    }
    int getIntFrom(int x, int choosen, int len)
    {
        int mo, y, z;
        for(int i=0; i<choosen; i++) {
            mo = pow(10, len-i);
            y = x / mo;
            z = x-(y*mo);
        }
        mo = pow(10, len-choosen);
        y = z / mo;
        return y;
    }
}


using namespace tools;
using namespace std;

int main()
{
    int a;
    int size;
    int current;
    int min=9999;
    int id=-1;
    cout << "A: " << endl;
    cin >> a; cin.ignore();
    size = intSize(a);
    for(int i=1; i<=size; i++){
        current=getIntFrom(a, i, size);
        if(current<min){
            min=current;
            id=i;
        }
    }
    cout << "A: " << a << endl;
    cout << "Skaiciaus dydis: " << size << endl;
    cout << "Maziausias skaicius: " << min << endl;
    cout << "Jo vieta: " << id << endl;
}
