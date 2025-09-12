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


void maxsubarraySum(int *arr, int n) {  
    int currSum=0, maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum<0) currSum = 0;
    }
    cout << maxSum;
}


int main() {
    fastio;
    
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxsubarraySum(arr, n);

    return 0;
}
