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


int main() {
    fastio;
    
    char str1[100];
    char str2[100] = "hello world";

    char str3[100] = "hello";
    char str4[100] = "world";

    char str5[100] = "abc";
    char str6[100] = "abc";
    char str7[100] = "xyz";

    strcpy(str1, str2); cout << str1 << endl;
    strcat(str3, str4); cout << str3 << endl << str4 << endl; 
    cout << strcmp(str5, str6) << endl; cout << strcmp(str5, str7) << endl;

    return 0;
}
