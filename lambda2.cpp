#include<iostream>

using namespace std;

int main () {
    int x = 10;
    int y = 20;

    auto add = [=](int a) {
        return x+y+a;
    };

    cout << "SUm: " << add(5) << endl;

    auto addByRef = [&x, &y] (int a) {
        x = 30;
        return x+y+a;
    };

    cout << "Sum by reference : " << addByRef(5) << endl;
    cout << "X after modification : " << x << endl;
    return 0;
}