#include <iostream>

using namespace std;

int suma(int n);

int main(void){
    int n;
    cout << "Iveskite n: " << endl;
    cin >> n; cin.ignore();
    
    cout << "suma = " << suma(n) << endl;
    
    return 0;
}
int suma(int n){
    //if(n==1) return 3;
    
    int sum = 0;
    
    for (int i = 1; i <= n; i++){
        sum += i*(i+1);
    }
    
    return sum;
}