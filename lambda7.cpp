#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> num = {0,1,2,3,4,5};
    int i = 0;
    while (num[i] != 0) {
        cout<<num[i]<<" ";
        i++;
    }
    // auto print()
    // for (auto i : num) {
    //     cout << i << " ";
    // }


}