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

void funcInt() {
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;

    delete ptr;
}

void funcArr() {
    int size; cin >> size;

    int *arr = new int[size]; // dynamically allocating memory

    int x=1;
    for(int i=0; i<size; i++) {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }

    return;

    delete[] arr; // free allocated memory from HEAP
}

int main() {
    fastio;
    funcInt();
    //int arr[100] = {1, 2, 3, 4, 5}; // statically allocated memory

    return 0;
}
