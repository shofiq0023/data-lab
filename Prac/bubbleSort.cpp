#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; i++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j] , arr[j + 1]);
            }
        }
        break;
    }
}

void outputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int arr[size] = {};

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // cout << "Before sorting" << endl;
    // outputArray(arr, size);

    cout << "After sorting" << endl;
    bubbleSort(arr, size);
    outputArray(arr, size);

    return 0;
}