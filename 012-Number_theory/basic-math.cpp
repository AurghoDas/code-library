#include<bits/stdc++.h>
using namespace std;

int count1(int n) {
    int count = 0;
    while(n>0) {
         count++;
         n = n/10;
        }
     return count;
}
int count2(int n) {
    int cnt = int(log10(n)) + 1;
    return cnt;
}

int rev(int n) {
    int revNum = 0;
    while(n>0) {
        int ld = n % 10;
        n = n/10;
        revNum = (revNum*10) + ld;
    }
    return revNum;
}

void palindrome(int n) {
    int revNum = 0;
    int x = n;
    while(n>0) {
        int ld = n % 10;
        n = n/10;
        revNum = (revNum*10) + ld;
    }
    if(x == revNum) cout << "true";
    else cout << "false";
}

void armstrong(int n) {
    int cnt = int(log10(n)) + 1;
    int x = n;
    int sum = 0;
    while(n>0) {
        int ld = n%10;
        sum  += pow(ld, cnt);
        n = n/10;
    }
    if(sum == x) cout << "Arm";
    else cout << "Not Arm";
}

void division1(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i==0) cout << i << " ";
        else continue;
    }
}
void division2(int n) {
    vector<int> ls;
    //TC = O(sqrt(n))
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            ls.push_back(i);
            if((n/i != i)) {
                ls.push_back(n/i);
            }
        }
    }
    //O(n*logn): n is the number of factors
    sort(ls.begin(), ls.end());
    //O(n): n is the number of factors
    for(auto it : ls) cout << it << " ";
}

void prime1(int n) {
    int cnt = 0;
    for(int i=1; i<=n; i++) {     //O(n)
        if(n%i == 0) {
            cnt ++;
        }
    }
    if(cnt == 2) cout << "prime";
    else cout << "not prime";
}
void prime2(int n) {
    int cnt = 0;
    for(int i=1; i*i<=n; i++) {   //O(sqrt(n))
        if(n%i==0) {
            cnt++;
            if((n/i) != i) {
                cnt++;
            }
        }
    }
    if(cnt==2) cout << "prime";
    else cout << "not prime";
}

void gcd1(int a, int b) {
    while(a>0 && b>0) {
        if(a>b) a = a % b;
        else b = b % a;
    }
    if(a == 0) cout << b;
    else cout << a;
}
void gcd2(int a, int b) {
    if(b == 0) {
        cout << a;
    } else {
        cout << gcd(b, a%b);
    }
}


int main(void) {
    int n1;
    cin >> n1;
    division2(n1);
    return 0;
}