#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {    //! for(int j=n; j>i; j--) {
            cout << j-i+1 << " ";   //?     cout << n-j+1 << " "; }
        }
        cout << endl;
    } 
}

int main(void) {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}