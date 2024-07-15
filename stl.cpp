#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;
int main () {
    vector <int> array;
    bool isEmpty;
    array<int,4> arr = {5,6,1,3};
    cout << arr.size()<<endl;
    cout << arr.at(2) << endl;
    cout << arr.front()<<endl;
    cout << arr.back() << endl;
    isEmpty = arr.empty();
    cout << isEmpty << endl;

    arr.sort()
}