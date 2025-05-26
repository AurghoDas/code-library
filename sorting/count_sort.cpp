#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr, int n) {
    // int k=arr[0];
    // for(int i=0; i<n; i++) {
    //     k=max(k,arr[i]);
    // }
    int k = *max_element(arr.begin(), arr.end());

    vector<int> count(k + 1, 0);
    for(int i=0; i<n; i++) {
        count[arr[i]]++;
    }

    for(int i=1; i<=k; i++) {
        count[i] += count[i-1];
    }

    vector<int> output(n);
    for(int i=n-1; i>=0; i--) {
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0; i<n; i++) {
        arr[i]=output[i];
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
