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

//Abstract Class
class Shape {
public:
    virtual void draw() = 0; //Abstract fnx, pure virtual fnx
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Draw circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Draw square" << endl;
    }
};

int main() {
    fastio;
    
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();
    
    return 0;
}
