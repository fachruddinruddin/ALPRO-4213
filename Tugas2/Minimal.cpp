#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;

  int min, bil;
  cout << "Masukkan bil ke-1: ";
  cin >> min;

  for (int i = 2; i <= n; i++) {
    cout << "Masukkan bil ke-" << i << ": ";
    cin >> bil;
    if (bil < min) {
      min = bil;
    }
  }

  cout << "Bilangan minimal-nya adalah : " << min << endl;
  return 0;
}
