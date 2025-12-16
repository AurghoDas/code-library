#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    if(n == 0) return 0;
    else return n + sum(n-1);
}

int fact(int n) {
    if(n == 0) return 1;
    else return n * fact(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}