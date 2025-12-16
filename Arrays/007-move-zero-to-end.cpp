#include<bits/stdc++.h>
using namespace std;

vector<int> MoveZero(vector<int> &arr, int n) {
    int j=-1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            j=i;
            break;
        }
    }
    //No zer0
    if(j == -1) return arr;

    for(int i=j+1; i<n; i++) {
        if(arr[i]!=0) {
            swap(arr[j],arr[i]);
            j++;
        }
    }
    return arr;
}


int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    MoveZero(arr, n);
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
