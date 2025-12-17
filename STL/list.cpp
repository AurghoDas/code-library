#include<iostream>
#include<list>
using namespace std;

int main(void) {
    //declaration
    std::list<int> list1;

    //initialization
    std::list<int> list2 = {1,2,3};

    //methods
    list<int>::iterator i = list2.begin();

    //insert    10,1,2,3
    list2.insert(i, 10);

    for(list<int>::iterator i = list2.begin(); i != list2.end(); i++) {
        cout << *i << " ";  // for printing the list
    }

    //push_back    1,2,3,20
    list2.push_back(20);

    //push_front   10,1,2,3,20
    list2.push_front(10);

    //pop_back     10,1,2,3
    list2.pop_back();

    //pop_front    1,2,3
    list2.pop_front();

    //reverse   3,2,1
    list2.reverse();

    //swap
    list2.swap(list1);

    //size:- number of elements present in the list = 3
    list1.size();

    //sort   3,2,1 --> 1,2,3
    list1.sort();

    //merge   10,20,1,2,3
    list1.merge(list2);

    return 0;
}