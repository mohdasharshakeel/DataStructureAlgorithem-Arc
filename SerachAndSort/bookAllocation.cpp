#include <iostream>
#include <vector>
using namespace std;

// 🔹 Function to check if it is possible to allocate books such that
// no student gets more than 'mid' pages.
bool isPossible(vector<int>& arr, int n, int m , int mid){
    int studentCount = 1;  // Start with 1 student
    int pageSum = 0;       // Sum of pages allocated to current student

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            // Book can be allocated to current student
            pageSum += arr[i];
        }
        else{
            // Allocate book to next student
            studentCount++;

            // If number of students exceeds limit OR current book is greater than mid
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            // Start counting pages for new student
            pageSum = arr[i];
        }
    }
    return true;  // Allocation possible within 'mid' pages
}

// 🔹 Main function to find minimum value of maximum pages
int findPages(vector<int>& arr, int n, int m) {
    if(m > n) return -1;  // Not enough books for students

    int s = 0;           // Start of binary search
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];   // Total sum of pages
    }
    int e = sum;         // End of binary search
    int ans = -1;
    int mid = s + (e - s) / 2;

    // 🔁 Binary Search
    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            // If it is possible to allocate with 'mid' as max pages
            ans = mid;
            e = mid - 1;  // Try for smaller value
        }
        else{
            s = mid + 1;  // Increase limit
        }
        mid = s + (e - s) / 2;
    }
    return ans;  // Minimum of maximum pages possible
}

// 🔹 Main Driver Function
int main(){
    vector<int> books = {10, 20, 30, 40};  // Pages in each book
    int n = books.size();                 // Number of books
    int m = 2;                            // Number of students

    int result = findPages(books, n, m);
    
    if(result != -1){
        cout << "Minimum of maximum pages allocated: " << result << endl;
    }
    else{
        cout << "Allocation not possible!" << endl;
    }

    return 0;
}
 