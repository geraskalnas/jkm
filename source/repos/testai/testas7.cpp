#include <iostream>

using namespace std;

int main(void){
    int a, b, c;
    int s;
    
    cout << "Iveskite a, b, c reiksmes: " << endl;
    cin >> a >> b >> c; cin.ignore();
    
    s = 10;
    for (int k = c; k <= b; k++){
        if(b - k > s) s = s + k;
        else s = s - k;
    }
    cout << s << " " << a << endl;
    cout << b << " " << c << endl;
    return 0;
}
/*
-4  10
5 2
*/