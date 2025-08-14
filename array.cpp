#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5];
    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 5);

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//241081032
