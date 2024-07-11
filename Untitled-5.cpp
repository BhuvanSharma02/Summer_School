#include<iostream>
using namespace std;
int main () {
    int bike_count = 2 ;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_coversion_assignment = 2.9;

    cout << "Bike Count: " << bike_count <<endl;
    cout << "Truck Count: " << truck_count << endl;
    cout << "Vehicle Count: " << vehicle_count << endl;
    cout << "Narrowing conversion: " << narrowing_coversion_assignment << endl;

    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of truck_count : " << sizeof(truck_count) << endl;

    return 0;
}