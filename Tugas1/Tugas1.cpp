#include <iostream>
using namespace std;

int Penjumlahan(int x, int y) {
return x + y;
}

int Pengurangan(int x, int y){
return x - y;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double RataRata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}
int main() {

    int a,b,i;

    int arr[] = {1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\n a: "; cin >> a;
    cout << "\n b: "; cin >> b;
    cout << "\n =================================================" << endl;
    cout << "\n Hasil dari a di tambah b: " << Penjumlahan(a, b) << endl;
    cout << "\n Hasil dari a di kurangi b:  " << Pengurangan(a, b) << endl;

    int tot = Total(arr,size);
    double rata_rata = RataRata(arr, size);
    cout << "\n Jumlah total array dari [1,3,4,5]: " << tot << endl;
    cout << "\n Rata Rata array: " << rata_rata << endl;

return 0;
}
