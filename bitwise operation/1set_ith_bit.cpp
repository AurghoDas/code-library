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

int setIthBit(int num, int i) {
    int bitMask = 1 << i;
    return (num | bitMask);
}

int main() {
    fastio;
    
    cout << setIthBit(6, 3) << endl;

    return 0;
}
