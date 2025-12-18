#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'

bool prime(int n) {
    for(int i=2; i*i <= n; i++) {
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
    

    
    return 0;
}