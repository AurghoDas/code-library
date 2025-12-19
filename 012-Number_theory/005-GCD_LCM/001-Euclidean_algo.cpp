#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

int gcd_(int a, int b) {
    if(a == 0) 
        return b;

    return gcd(b%a, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}