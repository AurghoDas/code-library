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


int main() {
    fastio;
    
    string str = "helloworld";
    string str1 = "I love c++ and c++ is faster, cry more";

    cout << str.length() << endl;
    cout << str.at(2) << endl;
    cout << str.substr(1, 5) << endl;
    cout << str1.find("c++") << endl;
    cout << str1.find("c++", 10) << endl;

    return 0;
}
