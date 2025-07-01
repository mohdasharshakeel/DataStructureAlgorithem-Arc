#include<iostream>
using namespace std;

void printArr(int arr[], int size){
 for (int i = 0; i < size; i++)
 { 
    arr[i] = arr[i] * 4; // ✅ array update yahan ho raha hai
    cout << arr[i] << " ";
 }
 cout << " inside the function " << endl;
}

int main(){
    int arr[5] ={1,2,3,4,5};
    int size = 5 ;

    for (int i = 0; i < size; i++)
    {
       cout<< arr[i] << " ";
    }
    cout << " before function call" << endl;

    printArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " after function call" << endl;

    return 0; 
}
