#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, min_val;

    cout << "Masukkan jumlah array: ";
    cin >> n;

    cout << "Masukkan " << n << " angka ke dalam array : " << endl;
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    min_val = arr[0];
    for (i = 1; i < n; i++){
        if (arr[i] < min_val){
            min_val = arr[i];
        }
    }

    cout << "Nilai minimum array adalah: " << min_val;
    return 0;
}

