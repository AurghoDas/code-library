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


void maxsubarraySum1(int *arr, int n) {  //BRUTE
    int maxsum = INT_MIN;

    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currSum=0;
            for(int i=start; i<=end; i++) {
                currSum += arr[i];
                
            }
            cout << currSum << ",";
            maxsum = max(maxsum, currSum);
        }
        cout << endl;
    }
    cout << "Max subarray sum: " << maxsum;
}


void maxsubarraySum2(int *arr, int n) {  //OPTIMAL 
    int maxsum = INT_MIN;
    
    for(int start=0; start<n; start++) {
        int currSum=0;
        for(int end=start; end<n; end++) {
            currSum += arr[end];
            maxsum = max(maxsum, currSum);
        }
    }
    cout << "Max subarray sum: " << maxsum;
}



int main() {
    fastio;
    
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxsubarraySum2(arr, n);

    return 0;
}
