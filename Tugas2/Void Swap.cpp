#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a,b;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "-----------------------------------" << endl;

    cout << "Sebelum di Swap :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "Setelah di Swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
