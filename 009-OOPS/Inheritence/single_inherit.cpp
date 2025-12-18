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

class Animal {
public:
    string name;

    void eat() {
        cout << "eats" << endl;
    }

    void breathe() {
        cout << "brethes" << endl;
    }
};

class Fish : public Animal {        //!Inheriting
public:
    int fins;

    void swim() {
        cout << "swims" << endl;
    }
};

int main() {
    fastio;
    
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;

    f1.swim();
    f1.eat(); 

    return 0;
}
