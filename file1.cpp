#include<iostream>
#include<fstream>

using namespace std;

int main () {
    ofstream file("example.txt", ios::ate);
    if (!file) {
        cout << "Error Opening File";
        return 1;
    }
    file << "\nHello World" << endl << "File Handling Test";
    file.close();
    return 0;
}