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

class Car {
    string name;
    string color;

public:
    Car() {     //non-parameterized cons
        cout << "Constructor without params" << endl;
        
    }

    Car(string name, string colorVal) {     //parameterized cons 
        cout << "Constructor with params" << endl;
        this->name = name;  //! "this->" pointer 
        color = colorVal;
    }

    void start() {
        cout << "Car has started.." << endl;
    }

    void stop() {
        cout << "Car has stopped.." << endl;
    }

    //Getter
    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }
};

int main() {
    fastio;
    
    Car c0; //non-parameterized cons
    Car c1("Porsche", "Matt black"); //parameterized cons 
    
    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;

    return 0;
}
