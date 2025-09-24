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
public:
    string name;
    string color;  
    int *mileage;  

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamically allocated memory
        *mileage = 12;
    }

    //Custom copy constructor
    Car(Car &original) {
        cout << "copying original to new" << endl;
        name = original.name;                
        color = original.color;
        mileage = new int;             //!DEEP COPY
        *mileage = *original.mileage;
    }

    //Destructor
    ~Car() {
        cout << "deleting object.." << endl;
        if(mileage != NULL) {
            delete mileage;    //!Custom deletion for Dyn.All.Memory(must)
            mileage = NULL;
        }
    }
};

int main() {
    fastio;
    
    Car c1("Porsche", "Matt black");

    Car c2(c1); //Custom copy
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    *c2.mileage = 10;
    cout << *c2.mileage << endl;
    cout << *c1.mileage << endl;
    
    return 0;
}
