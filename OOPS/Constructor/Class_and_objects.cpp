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
private:
    string name;
public:
    float cgpa;

    void Percentage() {
        cout << cgpa * 10 << "%" << endl;
    }
};

int main() {
    fastio;
    
    students s1;

    s1.cgpa = 9;
    cout << s1.cgpa << endl;

    s1.Percentage();

    return 0;
}
