#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

//Direct printing
void factorize(int n) {
    for(int i=2; i*i <= n; i++) {
        while(n%i == 0) {
            cout << i << endl;
            n /= i;
        } 
    }
    if(n != 1) cout << n << endl;
}

//Better way but returns vector 
vector<int> factor(int n) {
    vector<int> facts;
    for(long long i=2; i*i <= n; i++) {
        facts.push_back(i);
        n /= i;
    }
    if(n > 1) facts.push_back(n);

    return facts;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    factorize(10);

    return 0;
}