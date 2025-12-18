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
    
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int* *matrix = new int*[rows];   //
                                     //
    for(int i=0; i<rows; i++) {      //! Main syntax to remember
        matrix[i] = new int[cols];   //
    }                                //

    //data store
    int x=1;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << matrix[2][2] << endl;
    cout << *(*(matrix+2)+2) << endl;
    return 0;
}
