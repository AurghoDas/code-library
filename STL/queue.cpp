#include<iostream>
#include<queue>
using namespace std;

int main(void) {
    //declaration
    queue<int> queue1;

    //push value   10,20,30
    queue1.push(10);
    queue1.push(20);
    queue1.push(30);

    //front     10
    cout << endl << "front element:- " << queue1.front();

    //back      30
    cout << endl << "back element:- " << queue1.back();

    //pop
    queue1.pop();
    cout << endl << "new front element:- " << queue1.front();

    //size:- number of element present in the queue
    cout << endl << "No of element:- " << queue1.size();

    return 0;
}