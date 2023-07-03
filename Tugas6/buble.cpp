#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], int n) { // n=size
  for (int step = 0; step < n; ++step) {
    for (int i = 0; i < n - step - 1; ++i) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-1,5,20,12,-10};
  int size = sizeof(data) / sizeof(data[0]);

  clock_t start = clock();

  bubbleSort(data, size);

  clock_t end = clock();

  double timeTaken = double(end - start) / CLOCKS_PER_SEC;

  cout << "array yg diurutkan asc :\n";
  printArray(data, size);

  cout << "waktu yg dibutuhkan bubble sort : " << timeTaken << " detik" << endl;

  return 0;
}
