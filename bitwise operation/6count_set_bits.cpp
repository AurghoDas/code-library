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

int countSetBits(int num) {
    int count =  0;
    
    while(num>0) {
        int lastDig = num & 1;
        count += lastDig;

        num = num >> 1;
    }

    return count;
}

int main() {
    fastio;
    
    cout << countSetBits(6) << endl;

    return 0;
}
