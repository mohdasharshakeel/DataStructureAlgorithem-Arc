#include<iostream>
using namespace std;
void  swapAlternative(int arr[],int size){
    for (int i = 0; i <size; i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
      for (int i = 0; i < size; i++)
    {
       cout << arr[i]<<" ";
    }
    
}

int main(){
 
    int arr[6]={1,2,3,4,5,6};
    int size = 6;

    swapAlternative(arr,size);
    cout<<endl;
    
    for (int i = 0; i < size; i++)
    {
       cout << arr[i]<<" ";
    }
    

    return 0;
}