#include <bits/stdc++.h>
using namespace std;
/*
int main () {
    float amount;
    cout << "Enter Rs: ";
    cin >> amount;
    cout << "Entered Amount in Pound : " << setprecision(3) << amount/106.90 <<" Pounds";
    return 0;
}

*/

int pound_to_inr() {
    int pound;
    cin >> pound;
    return pound * 106;
}

float inr_to_pound() {
    int inr;
    cin >> inr;
    return inr/106.0;
}

float inr_to_doller() {
    int inr;
    cin >> inr;
    return inr/83.53;
}

float doller_to_inr() {
    int doller;
    cin >> doller;
    return doller*83.53;
}

float inr_to_yuan () {
    int inr;
    cin >> inr;
    return inr/11.48;
}

float yuan_to_inr() {
    int yuan;
    cin >> yuan;
    return yuan * 11.48;
}

int main () {
    int choice;
    float converted=0;
    
    cout << "Which Currency(0 to quit): \n1.Pound to INR\n2.INR to Pound\n3.INR to Doller\n4.Doller to INR\n5.INR to Yuan\n6.Yuan to INR\n";
    cin >> choice;
    cout << "Enter Amount: ";
    switch (choice) {
        case 0:
        exit;
        case 1:
        converted = pound_to_inr();
        break;
        case 2:
        converted = inr_to_pound();
        break;
        case 3:
        converted = inr_to_doller();
        break;
        case 4:
        converted = doller_to_inr();
        break;
        case 5:
        converted = inr_to_yuan();
        break;
        case 6:
        converted = yuan_to_inr();
        break;
        default:
        cout << "Enter Correct Option!"<<endl;

    }
    cout << "Converted Amount = " << setprecision(3) << converted;
    return 0;
}