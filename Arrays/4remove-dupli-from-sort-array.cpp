#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(vector<int> &arr, int n) {
    int i=0;
    for(int j=1; j<n; j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int num = RemoveDuplicates(arr, n);
    cout << "Unique Elements num: " << num << endl;
    
    cout << "Elements are: ";
    for(int i=0; i<num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
