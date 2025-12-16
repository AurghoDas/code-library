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


void func(int arr[]) {
    arr[0] = 100;
}

void func2(int *ptr) {
    ptr[0]=200;
}

void size(int nums[]) {
    cout << sizeof(nums) << endl; //8 = size of int pointer
}


int main() {
    fastio;
    
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout << *arr << endl;      //arr[0]
    // cout << *(arr+1) << endl;  //arr[1]

    func(arr); // passing array name is equal to passing the POINTER
    func2(arr);// same
    size(arr);
    cout << sizeof(arr) << endl; // 20
    // cout << arr[0] << endl;
    
    return 0;
}
