#include <iostream>

using namespace std;

int main()
{
    int sk = 273;
    int s = 0;
    while(sk!=0){
        int k=sk % 10;
        cout << k << endl;
        if ( k % 2 == 0) s = s + k;
        else             s = s - k;
        sk = sk / 10;
    }
    cout << "Rez: " << s << endl;
}
/*
3
7
2
Rez: -8
*/