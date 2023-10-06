#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){ // here arr[] is an array and n is the length
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int n; // here n is the size or length of an array
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Before Sorting: ";
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr,n);
    cout << "After Sorting: ";
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
