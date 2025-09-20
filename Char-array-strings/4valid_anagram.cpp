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

bool  isAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) {
        cout << "not valid anagrams";
        return false;
    }

    int count[26] = {0};
    for(int i=0; i<str1.length(); i++) {
        int idx = str1[i]-'a';
        count[idx]++;
    }

    for(int i=0; i<str2.length(); i++) {
        int idx = str2[i]-'a';
        if(count[idx] == 0) {
            cout << "not valid anagrams";
            return false;
        }
        count[idx]--;
    }

    cout << "valid anagrams";
    return true;
}

int main() {
    fastio;
    
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}
