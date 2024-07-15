#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main () {
    int num;
    vector <int> arr;
    for (int i=0;i<4;i++) {
        cout << "Enter Number: ";
        cin >> num;
        arr.push_back(num);
    }
    arr.pop_back();
    for (int i=0;i<arr.size();i++) {
        cout << arr.at(i);
    }
    cout << endl;
    
    cout << arr.size()<<endl;
    cout << arr.front()<<endl;
    cout << arr.back()<<endl;
    sort (arr.begin(), arr.end());


    for (int i=0;i<arr.size();i++) {
        cout << arr.at(i);
    }
    return 0;
}