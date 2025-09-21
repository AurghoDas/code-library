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

vector<int> pairSum(vector<int> arr, int target) {
    int st = 0, end = arr.size()-1;
    int currSum = 0;
    vector<int> ans;

    while(st<end) {
        currSum = arr[st] + arr[end];

        if(currSum == target) {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target) {
            end--;
        } else {
            st++;
        }
    }
    return ans;
}

int main() {
    fastio;
    
    vector<int> vec = {2, 7, 11, 15};
    int target = 22;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1];

    return 0;
}
