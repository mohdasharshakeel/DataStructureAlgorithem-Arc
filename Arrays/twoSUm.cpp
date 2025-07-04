#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 9;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Mil gaya index: " << i << " and " << j << endl;
                cout << "Values: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = true;
                // break; // optional: agar ek hi answer chahiye toh break kar do
            }
        }
    }

    if (!found) {
        cout << "Koi pair nahi mila." << endl;
    }

    return 0;
}
