#include <iostream>
using namespace std;

void kuadratkan(int &n) {
    n = n * n;
}

int main(){
    int x;

    cout << "Masukkan sebuah nilai: ";
    cin >> x;
    
    cout << "Nilai awal: " << x << endl;

    kuadratkan(x);
    cout << "Nilai setelah dikuadratkan: " << x << endl;
}