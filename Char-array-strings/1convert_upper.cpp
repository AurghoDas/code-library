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


void toUpper(char word[], int n) {

    for(int i=0; i<n; i++) {
        char ch =  word[i];
        if(ch >= 'a' && ch <= 'z') {
            word[i] = ch - 32;
        }                   
    }
    cout << word;
}

int main() {
    fastio;
    
    char word[] = "ApPle";
    toUpper(word, strlen(word));

    return 0;
}
