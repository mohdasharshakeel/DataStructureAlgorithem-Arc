#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size,int target){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target){
            return true;
        }
        
    }
    
    return false;


}

 int main(){
 
    int arr [10] ={1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 11;

   bool ans =  linearSearch(arr,size,target);

   if(ans == true){
    cout<< "target is found in the array" << endl;

   }else{
    cout<< " target is not found in the array" << endl;
   }


    return 0;

 }