#include<iostream>
#include<unistd.h>
using namespace std;
int main () {
    bool red_light {false};
    bool green_light {true};
    /*
    if (red_light) {
        cout << "Stop!" << endl;
    }
    else {
        cout << "Go Through! ";
    }

    if (green_light) {
        cout << "The Light is Green" << endl;
    }
    else {
        cout << "The Light is Not Green" << endl;
    }

    //sizeof()
    cout << "sizeof(bool): " << sizeof(bool) << endl;

    cout << endl;
    cout << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;
    cout << boolalpha;
    cout << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;
    sleep(30);
    */

   while(1) {
    cout << "Light is Green\n";
    sleep(5);
    cout << "Light is Red\n";
    sleep(5);
   }
    return 0;
}