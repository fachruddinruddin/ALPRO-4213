#include <iostream>

using namespace std;

enum sks {
    Alpro = 4,
    PWL = 2,
    Fisika = 4,
    RPL = 3,
    RLD = 2,
    Logik = 3,
    Basis_data = 3
};

int main() {
    sks x;

    x = Alpro;

    cout << " SKS : " << x << endl;

    return 0;
}
