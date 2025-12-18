#include<bits/stdc++.h>
using namespace std;

void para(int i, int sum) {
    if(i<1) {
        cout << sum;
        return;
    }
    para(i-1, sum+i);
}


int main() {
    int n;
    cin >> n;
    para(n, 0);
    return 0;
}