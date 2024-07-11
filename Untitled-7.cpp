#include<iostream>
using namespace std;

    const int Pen { 10 };
    const int Marker { 20 };
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

int main () {
    int tool {Eraser};
    switch (tool) {
        case Pen:
            cout << "Active tool is Pen" << endl;
            break;
        case Marker:
            cout << "Marker is Active" << endl;
            break;
        case Eraser:
        case Rectangle:
        case Circle:
            cout << "Eraser is Active" << endl;
            break;
    }
    return 0;
}