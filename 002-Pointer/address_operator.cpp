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
    
    int a =10;
    float b=3.14;
    char c=a;

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;
    
    int *ptr = NULL;
    //cout << *ptr << endl; //!segmentation fault(error)

    int **pptr = &ptr1;

    cout << ptr1 << endl;
    cout << *ptr1 << endl; //Dereference operator

    *ptr1 = 20;
    cout << a << endl;  //?important concept

    cout << ptr2 << endl;
    cout << static_cast<void*>(ptr3) << endl;
    cout << pptr << endl;
    cout << ptr << endl;

    return 0;
}
