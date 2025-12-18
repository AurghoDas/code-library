#include<iostream>
#include<stack>
using namespace std;

int main(void) {
    //declaration
    stack<int> stack1;

    //push value    10,20,30(last is the top)
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    //top
    cout << "top element:- " << stack1.top();

    //pop   10,20
    stack1.pop();
    cout << endl << "New top:- " << stack1.top();

    //size:- number of element present in stack
    cout << endl << "No of element:- " << stack1.size();

    return 0;
}