#include<bits/stdc++.h>
using namespace std;

void pal1(string st) {
    string m = "";
    int len = st.size()-1;

    for(int i=len; i>=0; i--){
        m += st[i];
    }

    if(m==st) cout << "Palindrome";
    else cout << "Not Palindrome";
}


int pal2(int i, string st) {
    if(i>=(st.size()/2)) return true;              //gives "1"
    if(st[i] != st[st.size()-i-1]) return false;   //gives "0"
    return pal2(i+1, st);
}


int main() {
    string s = "";
    cin >> s;
    cout << pal2(0, s);
    return 0;
}