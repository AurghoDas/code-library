#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    //precompute1-only for 26 lower cases
    // int hash[26] ={0};
    // for(int i=0; i<s.size(); i++) {
    //     hash[s[i] - 'a']++;             --> for upper case: hash[s[i] - 'A'];
    // }

    //precompute2-for any cases of words
    int hashh[256] ={0};
    for(int i=0; i<s.size(); i++) {
        hashh[s[i]]++;
    }


    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        //fetch
        // cout << hash[c - 'a'] << endl; -> precompute1
        cout << hashh[c] << endl;  // -> precompute2
    }
    return 0;
}
