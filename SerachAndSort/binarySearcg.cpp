#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            return mid;
        }
      else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int key = 6;

    int ans = binarySearch(arr, 6, key);
    cout << "Index of " << key << " is: " << ans << endl;

    return 0;
}
