#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

bool prime(int n) {
    for(int i=2; i<n; i++) {
        if(n % i == 0)
            return false;
    }
    return n > 1;   //if(n <= 1)
                    //  return false;
                    //else  
                    //  return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 

    // bool flag = false;
    // for(int i=2; i<n; i++) {
    //     if(n % i == 0)
    //         flag = true;
    //         break;
    // }

    // if(flag) cout << "not Prime" << endl;
    // else cout << "Prime" << endl;
    
    return 0;
}