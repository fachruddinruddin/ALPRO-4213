#include <iostream>
using namespace std;

struct Data {
    string nim,nama,jurusan;
    int tahun;
};

void printData(Data Arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Data " << i + 1 << ":" << endl;
        cout << "Nim : " << Arr[i].nim << endl;
        cout << "nama : " << Arr[i].nama << endl;
        cout << "tahun : " << Arr[i].tahun << endl;
        cout << endl;
    }
}


int main() {
    Data arr[4] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "siti", "kesehatan", 1993},
    };

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "" << endl;
    printData(arr, size);
    return 0;
}
