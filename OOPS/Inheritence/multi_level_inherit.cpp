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

class Mammal : public Animal {        
public:
    string bloodtype;

    Mammal() {
        bloodtype = "Warm";
    }
};

class Dog : public Mammal {
public:
    void tailwag() {
        cout << "Dog wags its tail" << endl;
    }
};


int main() {
    fastio;
    
    Dog d1;
    
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout << d1.bloodtype << endl;

    return 0;
}
