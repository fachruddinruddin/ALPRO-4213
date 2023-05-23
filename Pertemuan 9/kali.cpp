#include <iostream>
using namespace std;

int kali(int a, int b) {
  if (b == 0) {
    return 0;
  }
  else {
    return a + kali(a, b - 1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan angka pertama: ";
  cin>>x;
  cout<<"masukkan angka kedua: ";
  cin>>y;

  int hasil = kali(x,y);
  cout << "Hasil perkalian adalah : " << hasil <<endl;

  return 0;
}

