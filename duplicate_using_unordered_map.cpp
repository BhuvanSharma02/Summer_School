#include<unordered_map>
#include<iostream>

using namespace std;

int main () {
    string s = "jhon12Doe14@gmail18.com";
    unordered_map<char, int> countMap;

    for (char c : s ) {
        if (isdigit(c)) {
            countMap[c]++;
        }
    }
    for (const auto& entry : countMap) {
        cout << entry.first << " : " << entry.second << endl;
    }
    return 0;
}