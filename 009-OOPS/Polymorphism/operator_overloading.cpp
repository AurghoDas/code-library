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

class Complex {
    int real;
    int img;
public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void showNum() {
        cout << real << " + " << img << "i" <<  endl;
    }

    //operator overloading
    // void operator + (Complex &c2) {
    //     int resReal = this->real + c2.real;
    //     int resImg = this->img + c2.img;
    //     Complex c3(resReal, resImg);
    //     cout << "res = ";
    //     c3.showNum();
    // }

    //!OR

    Complex operator + (Complex &c2) {
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }
};

int main() {
    fastio;
    
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2;
    c3.showNum(); 
    return 0;
}
