#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main () {
    string user, pass;
    cout << "Enter Username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> pass;
    ofstream file("Pass.txt");
    if(!file) {
        cout << "Error!";
        return 1;
    }
    file << "Username: " << user << endl << "Password: " << pass;
    cout << "\n\nUser Info Stored Successfully!!";
    file.close();
}