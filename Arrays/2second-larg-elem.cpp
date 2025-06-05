#include<bits/stdc++.h>
using namespace std;

// int SecondlargestElement(vector<int> &arr, int n) {
//     int temp1=arr[0];
//     int temp2=INT_MIN; //-2147483648  // i.e., -2^31
//     for(int i=0; i<n; i++) {
//         if(arr[i]>temp1) {
//             temp1 = arr[i];
//         }
//         if(temp2<arr[i] && arr[i]<temp1) {
//             temp2 = arr[i];
//         }
//     }
//     return temp2;
// }

int SecondLargest(vector<int> &arr, int n) {
    int largest = arr[0];
    int slargest = -1;  // can be used "INT_MAIN"
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int SecondSmallest(vector<int> &arr, int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++) {
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

vector<int> GetSecondOrderElements(vector<int> &arr, int n) { // can use "pair<int, int>"
    int sLargest = SecondLargest(arr, n);
    int sSmallest = SecondSmallest(arr, n);
    return{sLargest, sSmallest};
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> result = GetSecondOrderElements(arr, n);  // can use "pair<int, int>"
    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
