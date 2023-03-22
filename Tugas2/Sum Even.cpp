#include <iostream>
using namespace std;

int main() {
   int n, sum = 0;
   cout << "Masukkan jumlah bilangannya : ";
   cin >> n;

   for (int i = 1; i <= n; i++) {
      int num;
      cout << "Masukkan bil ke-" << i << ": ";
      cin >> num;

      if (num % 2 == 0) {
         sum += num;
      }
   }
   cout << "Jumlah bilangan genap-nya adalah: " << sum << endl;
   return 0;
}
