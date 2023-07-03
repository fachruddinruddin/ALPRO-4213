#include <iostream>
#include <ctime>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-1,5,20,12,-10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array awal :\n";
    printArray(arr, size);

    clock_t start = clock();

    selectionSort(arr, size);

    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Array yg diurutkan asc :\n";
    printArray(arr, size);

    cout << "waktu yg dibutuhkan : " << timeTaken << " detik" << endl;

    return 0;
}
