#include<iostream>
#include<string>
using namespace std;

int main () {

    char cont;
    int choice, car=0, bike=0, rick=0;

    do {
        cout << "CAR PARKING\n";
        cout << "1. Park Car\n";
        cout << "2. Park Bike\n";
        cout << "3. Park Rikshaw\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                car++;
                cout << "Car Parked. \n";
                cout << "Total Cars Parked = " << car;
                cout << endl;
                break;
            case 2:
                bike++;
                cout << "Bike Parked. \n";
                cout << "Total Bikes Parked = " << bike;
                cout << endl;
                break;
            case 3:
                rick++;
                cout << "Rickshaw Parked. \n";
                cout << "Total Rickshaw Parked = " << rick;
                cout << endl;
                break;
            case 4:
            cout << "Have a Good Day!\n\n";
            exit(0);

            default:
                cout << "Invalid Choice!!!";
        }
        cout << "\nDo You want to perform Again?(Y/N)";
        cin >> cont;
    }
    while (cont == 'Y' || cont == 'y');
}