#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int temp=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>temp) {
            temp = arr[i];
        }
    }
    return temp;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
  
    int ans = largestElement(arr, n); // storing returned value in "ans"
    cout << ans;

    return 0;
}
