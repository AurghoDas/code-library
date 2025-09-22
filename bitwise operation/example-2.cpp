#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    vector<vector<string>> allSubsets;

    for(int mask=0; mask<(1<<N); mask++) {
        vector<string> currSet={};
        for(int j=0; j<N; j++) {
            if((mask & (1<<j))!=0) {
                currSet.push_back(arr[j]);
            }
        }
        allSubsets.push_back(currSet);
    }

    for (const auto& v : allSubsets) {
        cout << "{ ";
        for (const auto& s : v) {
            cout << s << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
