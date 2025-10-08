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

class Parent {
public:
    void show() {
        cout << "Parent class show.." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child class show.." << endl;
    }
};

int main() {
    fastio;
    
    Child child1;
    child1.show();

    return 0;
}
