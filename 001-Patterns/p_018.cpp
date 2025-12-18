#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A';
        ch = ch + (n -i -1);
        for(int j=0; j<=i; j++) {
            cout << ch;
            ch ++;
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