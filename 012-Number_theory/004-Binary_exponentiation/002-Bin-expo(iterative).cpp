#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res*a;
        a = a*a;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    


    return 0;
}