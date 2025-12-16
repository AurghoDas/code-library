#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

void sieve(int n) {
    // bool primes[n+1];
    // fill(primes, primes+n+1, true);
    vector<bool> primes(n+1, true);

    primes[0] = primes[1] = false;

    for(int i=2; i*i<=n; i++) {
        if(primes[i]) {
            cout << i << endl;
            for(int j=i*i; j<=n; j+=i) {
                primes[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(100);

    return 0;
}
