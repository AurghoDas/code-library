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

class Example {
public:
    static int x; //static int x = 0;
};

int Example::x = 0;

int main() {
    fastio;
    
    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl; //0
    cout << eg2.x++ << endl; //1
    cout << eg3.x++ << endl; //3
    
    return 0;
}
