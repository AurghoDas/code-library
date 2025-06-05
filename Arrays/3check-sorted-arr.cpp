#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &arr, int n) {
    for(int i=1; i<n; i++) {
        if(arr[i]>=arr[i-1]) {

        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int sort = isSorted(arr, n);

    if(sort) cout << "Sorted" << endl;
    else cout << "Not Sorted" << endl;

    return 0;
}
