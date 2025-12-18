#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    if((N & (1 << (k-1))) != 0) {
        cout << "k-th bit is SET";
    } else {
        cout << "k-th bit is UNSET";
    }
}
