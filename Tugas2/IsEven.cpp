#include <iostream>
using namespace std;

int main() {
  int x;

  cout << "Masukkan bilangannya : ";
  cin >> x;

  if (x % 2 == 0) {
    cout << x << " adalah bil genap / is even" << endl;
  } else {
    cout << x << " adalah bil ganjil / is odd" << endl;
  }

  return 0;
}
