#include<iostream>
using namespace std;

int main () {
    auto divide = [] (int a, int b) -> double {
        if (b==0) {
            return 0;
        }
        return static_cast<double> (a) / b;
    };

    cout << "Division result: " << divide(10, 3) << endl;
    cout << "Division by Zero Results : " << divide (10, 0) << endl;

    return 0;
}