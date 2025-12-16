#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    int ini=0;
    for(int i=1; i<=n; i++) {
        //stars
        for(int j=0; j<=n-i; j++) {
            cout << "*";
        }
        //space
        for(int j=0; j<ini; j++) {
            cout << " ";
        }
        //stars
        for(int j=0; j<=n-i; j++) {
            cout << "*";
        }
        ini += 2;
        cout << endl;
    } 

    int space = 2*(n-1);
    for(int i=1; i<=n; i++) {
        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        //space
        for(int j=0; j<space; j++) {
            cout << " ";
        }        
        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        space -= 2;        
        cout << endl;
    } 
}

int main(void) {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}