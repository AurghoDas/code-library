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

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student {
public:
    string name;
};

int main() {
    fastio;
    
    TA ta1;

    ta1.name = "David";
    ta1.subject = "C++";
    ta1.cgpa = 9.1;

    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.cgpa << endl;

    return 0;
}
