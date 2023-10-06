#include <iostream>
using namespace std;

void arrayOutput(int arr[], int size, bool needEnd = false) {
    for (int i = 0; i < size; i++) {
        if (needEnd) {
            cout << arr[i] << endl;
        } else {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int data, i;
    cout << "Enter the size of the array: ";
    cin >> data;

    int arr[data] = {};

    for (i = 0; i < data; i++) {
        cout << "Enter the array data: ";
        cin >> arr[i];
    }

    arrayOutput(arr, data, true);

    return 0;
}