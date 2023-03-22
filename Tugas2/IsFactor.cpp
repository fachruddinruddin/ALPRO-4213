#include <iostream>
using namespace std;

int main() {
   int x;
   cout << "Masukkan bilangannya : ";
   cin >> x;

   cout << "Faktor dari " << x << " adalah : ";
   for (int i = 1; i <= x; i++) {
      if (x % i == 0) {
         cout << i << " ";
      }
   }
   return 0;
}
