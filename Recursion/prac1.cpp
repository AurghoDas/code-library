#include<bits/stdc++.h>
using namespace std;

void printname(int i, int n) {     //TC-O(n), SC-O(n)
    if(i>n) return;
    cout << "Raj" << endl;
    printname(i+1, n);        //printname(1, n)
}


void revnum(int i, int n) {
    if(i<1) return;
    cout << i << " ";
    revnum(i-1, n);            //revnum(n, n)
}




int main() {
    int n;
    cin >> n;

    revnum(n, n);
    
    return 0;
}
