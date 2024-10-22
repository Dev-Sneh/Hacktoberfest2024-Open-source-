#include <iostream>
#include <vector>
using namespace std;

void printSubarrays(const vector<int>& arr) {
    int n = arr.size();
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "[ ";
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    vector<int> arr = {4, 5, 6};
    cout << "Subarrays are:" << endl;
    printSubarrays(arr);
    return 0;
}
