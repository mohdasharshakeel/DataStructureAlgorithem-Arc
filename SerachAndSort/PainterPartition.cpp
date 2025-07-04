#include <iostream>
#include <vector>
using namespace std;

// 🔹 Function to check if allocation possible under 'mid' time limit
bool isPossible(vector<int>& boards, int k, int mid) {
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (boardSum + boards[i] <= mid) {
            boardSum += boards[i];
        } else {
            painterCount++;
            if (painterCount > k || boards[i] > mid) {
                return false;
            }
            boardSum = boards[i];
        }
    }
    return true;
}

// 🔹 Function to return minimum time required to paint all boards
int painterPartition(vector<int>& boards, int k, int timePerUnit) {
    int sum = 0;
    for (int i = 0; i < boards.size(); i++) {
        sum += boards[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (isPossible(boards, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans * timePerUnit;
}

// 🔹 Main function
int main() {
    vector<int> boards = {10, 20, 30, 40}; // Board lengths
    int k = 2;                             // Number of painters
    int timePerUnit = 1;                  // Time to paint 1 unit board

    int result = painterPartition(boards, k, timePerUnit);
    cout << "Minimum time to paint all boards: " << result << " units" << endl;

    return 0;
}
