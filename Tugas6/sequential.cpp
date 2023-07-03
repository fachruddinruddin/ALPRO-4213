#include <iostream>
#include <ctime>

using namespace std;

int sequentialSearch(int arr[], int size, int t) { // t=target
    for (int i = 0; i < size; i++) {
        if (arr[i] == t) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,5,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    clock_t start = clock();

    int index = sequentialSearch(arr, size, target);

    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "target ditemukan index ke " << index << endl;
    } else {
        cout << "tidak ditemukan" << endl;
    }

    cout << "waktu yg dibutuhkan : " << timeTaken << " detik" << endl;

    return 0;
}
