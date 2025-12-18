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

void spiralMatrix(int matrix[][4], int n, int m) {
    int srow=0, scol=0;
    int erow=n-1, ecol=m-1;
    
    while(srow<=erow && scol<=ecol) {
        //top
        for(int j=scol; j<=ecol; j++) {
            cout << matrix[srow][j] << " " ;
        }

        //right
        for(int i=srow+1; i<=erow; i++) {
            cout << matrix[i][ecol] << " ";
        }

        //bottom
        for(int j=ecol-1; j>=scol; j--) {
            if(srow == erow) break; //corner case for odd
            cout << matrix[erow][j] << " ";

        }
        //left
        for(int i=erow-1; i>=srow+1; i--) {
            if(scol == ecol) break; //corner case for odd
            cout << matrix[i][scol] << " ";
        }

        srow++; scol++;
        erow--; ecol--;
    }
}


int main() {
    fastio;
    
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

     
    spiralMatrix(matrix, 4, 4);
    cout << endl;

    int matrix2[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};

    spiralMatrix(matrix2, 3, 4);                

    return 0;
}
