#include <iostream>
using namespace std;

int kurang(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return kurang(a - 1, b - 1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan angka pertama: ";
  cin>>x;
  cout<<"masukkan angka kedua: ";
  cin>>y;

  int hasil = kurang(x,y);
  cout << "hasil pengurangan adalah :" << hasil << endl;

  return 0;
}

