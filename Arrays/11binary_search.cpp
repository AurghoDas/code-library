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


int binSearch(int *arr, int n, int key) {
    int st=0, end=n-1;

    while(st<=n) {
       int mid=(st+end)/2;

       if(arr[mid] == key) {
        return mid;
       } else if(arr[mid]<key) {
        st=mid+1;
       } else {
        end=mid-1;
       }
    }

    return -1;
}


int main() {
    fastio;
    int x = 12;
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans=binSearch(arr, n, x);
    cout << ans << endl;

    return 0;
}
