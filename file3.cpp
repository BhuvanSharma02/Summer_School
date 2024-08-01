#include<iostream>
#include<fstream>

using namespace std;

int main () {
    ofstream file("example.txt");
    if (!file) {
        cout << "Error!" << endl;
        return 1;
    }
    file << "Bhuvan 03" << endl;
    file << "Aakash 08" << endl;
    file << "Pratham 37" << endl;

    file.close();
    return 0;
}