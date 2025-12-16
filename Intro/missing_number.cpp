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
    ll n=0; cin >> n;
    ll sum1=0, sum2=0;

    for(ll i=1; i<n; i++) {
        ll x=0; cin >> x;
        sum1+=x;
    }

    sum2 = (n*(n+1))/2;

    ll ans = sum2 - sum1;
    cout << ans << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}