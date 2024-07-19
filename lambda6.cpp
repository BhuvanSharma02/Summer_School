#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main () {
    vector<int> numbers = {1,3,2,6,7};

    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << " ";
    });

    return 0;
}