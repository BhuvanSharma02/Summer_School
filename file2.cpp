#include<bits/stdc++.h>
#include<fstream>
#include<map>
using namespace std;

int main () {

    ifstream file("example.txt");
    if (!file) {
        cout << "Error!" << endl;
        return 1;
    }

    map<string, int> freq ;
    map<char, int> freq1;
    string line;
    int number;
    int sum = 0;
    int count = 0;
    string s = "";

    while(!file.eof()) {
        file>>line>>number;
        freq[line]++;
        s+=line;
        sum += number;
        count++;
    }


    cout << "\nSum: " << sum;
    cout << "\nAverage: " << sum/count << endl;

    for(auto i : freq) {
        cout << i.first << " : " << i.second << endl;
    }

    for (int i = 0 ; i<s.length(); i++) {
        s[i] = tolower(s[i]);
        freq1[s[i]]++;
    }

    for (auto i : freq1) {
        cout << i.first << " : " << i.second << endl;
    }

    file.close();
    return 0;
}