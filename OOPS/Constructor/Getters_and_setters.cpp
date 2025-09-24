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

class students {
    string name;
    float cgpa;
public:
    void Percentage() {
        cout << cgpa * 10 << "%" << endl;
    }

    //!Setters
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    //!Getters
    string getName() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }

};

int main() {
    fastio;
    students s1;
    
    s1.setName("Aurgho");
    s1.setCgpa(9.0);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    return 0;
}
