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

void clearLastBits(int num, int i) {
    int bitMask = (~0) << i;
    num = num & bitMask;

    cout << num << endl;
}

int main() {
    fastio;
    
    clearLastBits(15, 2);

    return 0;
}
