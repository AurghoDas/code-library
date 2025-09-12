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


void bestBuy(int *prices, int n) { //O(n)
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    
    int maxProfit=0;
    for(int i=0; i<n; i++) {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << maxProfit;
}

int main() {
    fastio;
    
    int prices[6] = {7,6,5,4,3,2};
    int n = sizeof(prices)/sizeof(prices[0]);

    bestBuy(prices, n);

    return 0;
}
