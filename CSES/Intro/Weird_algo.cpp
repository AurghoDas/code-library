#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;

#define ll         long long
#define dl         long double
#define endl       '\n'
#define fastio     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)   (a*b)/__gcd(a,b)
#define w(x)       int x; cin >> x; while(x--)

void solve() {
    ll n; cin >> n;

    while(true) {
        cout << n << " ";
        if(n == 1) break;
        if(n%2 == 0) {
            n = n/2;
        } else {
            n = 3*n + 1;
        }
    }
}

int main() {
    fastio;
    solve();
    return 0;
}