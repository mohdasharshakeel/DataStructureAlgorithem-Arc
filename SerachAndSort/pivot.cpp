#include<iostream>
using namespace std;

int pivotInArray(int arr[], int size ){
int s = 0;
int e = size -1;
int mid = s + (e-s)/2;

while(s<e){
    if(arr[mid]>= arr[0]){
        s = mid + 1;
    }
    else{
        e = mid;
    }
    mid = s + (e-s)/2;
}
return s ;
}


int main(){
    int arr [5] = {7,9,1,2,3};
    int size = 5;

    int result = pivotInArray(arr,size);
    cout << "The pivot in this array is :" << result << endl;

    return 0;
}