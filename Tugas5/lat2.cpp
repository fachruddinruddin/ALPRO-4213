#include <iostream>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};
struct sepeda Mysepeda;

int main(){
    Mysepeda.merk = "Polygon";
    Mysepeda.type = "Sepeda Gunung";
    Mysepeda.harga = "2.000.000";
    Mysepeda.tahun = 2013;

    cout << "Merk : " << Mysepeda.merk << endl;
    cout << "Type : " << Mysepeda.type << endl;
    cout << "Tahun : " << Mysepeda.tahun << endl;
    cout << "Harga : " << Mysepeda.harga << endl;

    return 0;
}