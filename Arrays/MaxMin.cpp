#include <iostream>
using namespace std ;


int maxVal(int num[],int n){
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
       if(num[i]>max){
        max = num[i];
       }
    }
    return max;
    
}
int minVal(int num[],int n){
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
       if(num[i]<min){
        min = num[i];
       }
    }
    return min;
    
}


int main(){
 int size;
 cin>> size;

 int num[50];
 for (int i = 0; i < size; i++)
 {
    cin>> num[i];
 }

int MinValueReturn = minVal(num, size);
cout << " The min vale is :" << MinValueReturn << endl;

int MaxValueReturn = maxVal(num,size);
cout << " The max vale is :" << MaxValueReturn << endl;

 

    return 0;
}