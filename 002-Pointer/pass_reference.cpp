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


//pass by value
void changeA(int param) {
    param = 20;
    cout << param << endl;
}

//pass by reference using pointer
void changeB(int *ptr) {
    *ptr = 30;
    cout << *ptr << endl;
}

//pass by reference using Reference Variables
void changeC(int &a) {
    a = 50;
    cout << a << endl;
}

int main() {
    fastio;
    
    int a = 10;
    int &b = a;

    // b=25;
    // cout << b << endl;  //! 25
    // cout << a << endl;  //! 25

    // changeA(a);
    // changeB(&a);
    changeC(a);

    cout << a << endl;
    return 0;
}
