#include <iostream>
using namespace std;

bool isFound(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout <<"Jika memasukkan angka 0-9 hasilnya True selain itu False "<< endl;
    cout << "========================================================"<<endl;
    cout << "Masukkan Nilai x : ";
    cin >> x;

    if (isFound(arr, n, x)) {
        cout << "Angka " << x << " True" << endl;
    }
    else {
        cout << "Angka " << x << " False" << endl;
    }
    return 0;
}
