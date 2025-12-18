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

class Print {
public:
    void show(int x) {
        cout << "Int: " << x << endl;
    }

    void show(string str) {
        cout << "String: " << str << endl;
    }
};

int main() {
    fastio;
    
    Print p1;

    p1.show("Abul");
    p1.show(69);

    return 0;
}
