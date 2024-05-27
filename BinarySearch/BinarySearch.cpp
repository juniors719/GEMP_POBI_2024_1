#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int getIndex(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {9, 5, 3, 6, 1, 8, 6, 3, 2, 4};
    // Na busca binária, o array precisa estar ordenado
    sort(arr.begin(), arr.end());
    // 1 2 3 3 4 5 6 6 8 9
    cout << getIndex(arr, 9) << endl;
}