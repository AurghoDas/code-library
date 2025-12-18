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


bool search(int mat[][4], int n, int m, int key) { //STAIRCASE SEARCH-->O(N+M)
    int i=0, j=m-1;

    while(i<n && j>=0) {
        if(mat[i][j] == key) {
            cout << "Found at cell (" << i << "," << j << ")" << endl;
            return true;
        } else if(mat[i][j] < key) {
            //down
            i++;
        } else {
            //left
            j--;
        }
    }

    cout << "Not found" << endl;
    return false;
}


int main() {
    fastio;
    
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};

    search(matrix, 4, 4, 33);

    return 0;
}
