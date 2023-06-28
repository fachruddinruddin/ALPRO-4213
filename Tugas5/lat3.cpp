#include <iostream>
#include <math.h>

using namespace std;

typedef struct hitung{
    float phi = 3.14;

    //Luas Persegi Panjang
    int LPP(int p, int l){
        return p * l;
    }

    //Luas Lingkaran
    float LL(int r){
        return phi * r * r;
    }

    //Valume Kerucut
    float VK(int r, int t){
        return 0.3 * phi * pow(r,2) * t;
    }

    //Volume Bola
    double VB(int r){
        return 1.3 * phi * pow(r,3);
    }
}x;
 x rumus;

int main(){

    cout << "Luas Persegi Panjang : " << rumus.LPP(3,7) << endl;
    cout << "Luas Lingkaran : " << rumus.LL(3) << endl;
    cout << "Volume Kerucut : " << rumus.VK(4,7) << endl;
    cout << "Volume Bola : " << rumus.VB(5) << endl;

    return 0;
}
