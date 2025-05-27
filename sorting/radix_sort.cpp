#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr, int n, int pos) {
    int k = 9; // Maximum digit in base 10 is 9
    vector<int> count(k + 1, 0);

    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / pos) % 10;
        count[digit]++;
    }

    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / pos) % 10;
        output[--count[digit]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
};

void radixSort(vector<int> &arr, int n) {
    int maxNum = *max_element(arr.begin(), arr.end());

    // Apply counting sort for every digit (pos = 1, 10, 100, ...)
    for (int pos = 1; maxNum / pos > 0; pos *= 10) {
        countSort(arr, n, pos);
    }
};


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
