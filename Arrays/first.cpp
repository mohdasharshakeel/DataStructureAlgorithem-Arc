#include<iostream>
using namespace std;

void multiply(int arr[], int size) {
    int product = 1;

    for (int i = 0; i < size; i++) {
        product *= arr[i];  // Multiply each element
    }

    cout << "Multiplication of array elements: " << product << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    multiply(arr, 5);
    return 0;
}
