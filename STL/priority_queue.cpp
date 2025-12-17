#include<iostream>
#include<queue>
using namespace std;

int main(void) {
    //create a (max heap)
    //priority_queue<int> queue1;

    //create a (mean heap)
    priority_queue<int, vector<int>, greater<int> > queue1;

    //push value
    queue1.push(20);
    queue1.push(40);
    queue1.push(30);
    //20,40,30
    //in MAX HEAP: 40,30,20 - will be arranged in descending order
    //in MIN HEAP: 20,30,40 - will be arranged in ascending order

    //top
    cout << endl << "top element:- " << queue1.top();

    //pop
    queue1.pop();
    cout << endl << "new top element:- " << queue1.top();

    //size:- number of element present in queue
    cout << endl << "No. of element:- " << queue1.size();

    //swap:- swap the elemnts of 2 P.Q
    //pq1.swap(pq2);

    return 0;
}