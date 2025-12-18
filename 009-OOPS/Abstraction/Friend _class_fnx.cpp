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

class A {
    string secret = "secret data";
    friend class B; 
    friend void revealSecret(A &obj);
};

class B {  //Becomes a friend class of A
public:
    void showSecret(A &obj) {
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj) {
    cout << obj.secret << endl;
}

int main() {
    fastio;
    A a1;
    B b1;

    // b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}
