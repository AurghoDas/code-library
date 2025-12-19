#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

long long power(long long a, long long b) {
    if(b == 0) 
        return 1;

    a %= MOD;

    long long half_power = power(a, b/2);
    if(b%2 == 0)
        return half_power * half_power % MOD;
    else
        return half_power * half_power % MOD * a % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    


    return 0;
}