#include<iostream>
using namespace std;

int leftMost(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e){
        int mid = s + (e - s) / 2;

        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;  // go left for first occurrence
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
}

int rightMost(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e){
        int mid = s + (e - s) / 2;

        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;  // go right for last occurrence
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    int arr[10] = {1,2,2,2,2,3,3,3,3,8};
    int key = 3;

    int leftResult = leftMost(arr, 10, key);
    cout << "The first most occurrence of " << key << " is at index " << leftResult << endl;

    int rightResult = rightMost(arr, 10, key);
    cout << "The last most occurrence of " << key << " is at index " << rightResult << endl;

    return 0;
}
