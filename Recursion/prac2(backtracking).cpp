#include<bits//stdc++.h>
using namespace std;

void printnum1(int i, int n) {
    if(i<1) return;
    printnum1(i-1, n);
    cout << i << " ";
}

void revprintnum2(int i, int n) {
    if(i>n) return;
    revprintnum2(i+1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;

    revprintnum2(1, n);

    return 0;
}