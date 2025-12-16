#include<bits/stdc++.h>
using namespace std;

vector<int> LeftRotate(vector<int> &arr, int n, int d) {
    reverse(arr.begin(), arr.end());             
    reverse(arr.begin(), arr.begin() + d);      
    reverse(arr.begin() + d, arr.end());
    return arr;
}


int main() {
    int n, d; cin >> n; cin >> d;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    LeftRotate(arr, n, d);
    
    cout << "Rotated array is: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
