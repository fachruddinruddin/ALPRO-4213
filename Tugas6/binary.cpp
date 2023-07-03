#include <iostream>
#include <ctime>

using namespace std;

int binarySearch(int arr[], int l, int h, int t) { // l=low, h=high, t=target
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == t) {
            return mid;
        } else if (arr[mid] < t) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,5,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    clock_t start = clock();

    int index = binarySearch(arr, 0, size - 1, target);

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
