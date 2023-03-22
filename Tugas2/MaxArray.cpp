#include <iostream>
using namespace std;

int main() {
   int arr[100], n, i, max;

   cout << "Masukkan panjang array : ";
   cin >> n;

   cout << "Masukkan " << n << " angka ke dalam array : " << endl;
   for(i = 0; i < n; i++)
      cin >> arr[i];

   max = arr[0];
   for(i = 1; i < n; i++) {
      if(max < arr[i])
         max = arr[i];
   }

   cout << "Nilai maksimum array adalah: " << max;
   return 0;
}
