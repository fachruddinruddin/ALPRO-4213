#include <iostream>
using namespace std;

int pangkat(int a, int b) {
  if (b == 0) {
    return 1;
  }
  else {
    return a * pangkat(a,b - 1);
  }
}

int main(){
  int x,y;

  cout<<"masukkan bilangan asli: ";
  cin>>x;
  cout<<"masukkan bilangan pangkat: ";
  cin>>y;

  int hasil = pangkat(x,y);
  cout << "Hasil pangkat adalah : " << hasil << endl;

  return 0;
}

