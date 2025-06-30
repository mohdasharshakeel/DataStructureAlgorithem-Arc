#include<iostream>
using namespace std;

void printTable(int num) {
    cout << "Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printTable(number);

    return 0;
}
