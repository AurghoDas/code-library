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
    Example() {
        cout << "Constructor.." << endl;
    }

    ~Example() {
        cout << "Destructor.." << endl;
    }
};


int main() {
    fastio;
    
    int a=0;
    if (a==0) {
        static Example eg1;
    }
    cout << "Code ending.." << endl;
    return 0;
}
