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


void printSubarrays(int *arr, int n) {
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            cout << "[";
            for (int i = st; i <= end; i++) {
                cout << arr[i];
                if (i != end) cout << " "; 
            }
            cout << "]";
            if (end != n - 1) cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    fastio;
    
    int arr[] = {1,2,3,4,5};
    int n = 5;
    printSubarrays(arr, n);
    return 0;
}
