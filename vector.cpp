#include<iostream>
#include<vector>

using namespace std;
int main () {
    vector <int> v;
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(10);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(12);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(14);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(16);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(19);
    cout << "capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Front : " << v.front() << endl;
    cout << "Back : " << v.back() << endl;

    cout << "Before POP" << endl;
    for (int i:v) {
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After Pop" << endl;
    for (int i:v) {
        cout << i << " ";
    }cout << endl;

    cout << "Before Clear Size: " << v.size() << endl;
    v.clear();
    cout << "After Clear Size: " << v.size() << endl;
    cout << v.capacity() << endl;
    //another way to create array vector <int> v (5,1) size 5 all initialized to 1
    for (int i:v) {
        cout << i;
    }
    vector<char> vowel {'a', 'b', 'c', 'd', 'e'};
    for (char i:vowel) {
        cout << i << " ";
    }
}