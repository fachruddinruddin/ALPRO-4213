/*
Nama : Muhammad Fachruddin
NIM  : A11.2022.14476
Kelas: A11.4213
*/

#include <iostream>
using namespace std;

typedef struct mahasiswa{
    string nama, nim;
    int score[5];

    void printData() {
        cout << "Nama :" << nama <<endl;
        cout << "Nim :" << nim <<endl;
        for(int i = 0; i < 5; i++) {
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }
    void swapScore(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int sumScore(int *arr, int n) {
        if(n == 0) {
            return score[0];
        }
        return score[n] + sumScore(arr, n-1);
    }

    void bubble(int arr[], int n){
    if(n<=1){
        return;
    }else{
        for(int i=0; i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swapScore(&arr[i],&arr[i+1]);
            }
    }
    bubble(arr,n-1);
    }
    }
}mahasiswa;

int main() {
    cout << "Program data mahasiswa" << endl;

    mahasiswa m1 = {"Muhammad Fachruddin", "A11.2022.14476", {90, 85, 89, 98, 80}};
    cout << "-Before swap" << endl;
    m1.printData();

    cout << "-After swap" << endl;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();

    int n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "-Nilai Rata-rata :" << m1.sumScore(m1.score, n)/n << endl;

    m1.bubble(m1.score,n);
    cout << "-After sorting" << endl;
    m1.printData();

    return 0;
}
