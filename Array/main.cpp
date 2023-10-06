#include<iostream>
using namespace std;

int main(){
    //cout << "Hello World!" << endl;
    //int A[5]; // array declaration
//    A[0] = 5;
//    A[1] = 15;
//    A[2] = 25;
//    A[3] = 50;
//    A[4] = 75;
//    cout << A[3] << endl;
    int n; // array size
    cin >> n; // input from user
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
