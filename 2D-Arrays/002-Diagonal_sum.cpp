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


void diagonalSum(int matrix[][3], int n) {  //O(N^2)
    int sum=0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                sum += matrix[i][j];
            } else if(j == n-i-1) {
                sum += matrix[i][j];
            }
        }
    }
    cout << sum << endl;
}

void diagonalSum1(int matrix[][3], int n) {  //O(N)
    int sum=0;

    for(int i=0; i<n; i++) {
        sum += matrix[i][i];
        if(i != n-i-1) {
            sum += matrix[i][n-i-1];
        }
    }
    cout << sum << endl;
}

int main() {
    fastio;
    
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

     
    //diagonalSum(matrix, 4);
    cout << endl;

    int matrix2[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    diagonalSum1(matrix2, 3); 

    return 0;
}
