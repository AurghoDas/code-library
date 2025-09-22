//write a function to update thr ith bit in a number
//according to given value(0 & 1)

#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;

#define ll         long long
#define dl         long double
#define endl       '\n'
#define fastio     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)   (a*b)/__gcd(a,b)
#define w(x)       int x; cin >> x; while(x--)

void fastExpo(int x, int n) {
    int ans = 1;

    while(n > 0) {
        int lastBit = n & 1;
        if(lastBit) {
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1; 
    }

    cout << ans << endl;
}

int main() {
    fastio;
    
    fastExpo(3, 5);

    return 0;
}
