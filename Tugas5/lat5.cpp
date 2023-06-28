#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string Merk,Type,Harga;
    int Tahun;
};

int main() {
    Sepeda sepeda;
    Sepeda *ps = &sepeda;

    // Mengisi nilai member menggunakan pointer
    ps->Merk = "Polygon";
    ps->Type = "Sepeda Gunung";
    ps->Tahun = 2013;
    ps->Harga = "2.000.000";

    // Mengakses nilai member menggunakan pointer
    cout << "Merk: " << ps->Merk << endl;
    cout << "Type: " << ps->Type << endl;
    cout << "Tahun: " << ps->Tahun << endl;
    cout << "Harga: " << ps->Harga << endl;

    return 0;
}
