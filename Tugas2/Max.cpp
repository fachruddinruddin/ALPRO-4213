#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah bilangan: ";
  cin >> n ;

  int max, bil;
  cout << "Masukkan bil ke-1: ";
  cin >> max;

  for (int i = 2; i <= n; i++) {
    cout << "Masukkan bil ke-" << i << ": ";
    cin >> bil;
    if (bil > max) {
      max = bil;
    }
  }

  cout << "Bilangan maksimal-nya adalah: " << max << endl;
  return 0;
}
