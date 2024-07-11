#include<iostream>
using namespace std;
int main () {
    int arr[5] = {10,20,30,40,50};
    //to find sum of elements in an array
    int sum = 0;
    for (auto x : arr)
    sum += x;

    cout << "Sum is : "<< sum;

    int max = arr[0];
    int min = arr[0];
    for (int x : arr){
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }

    }
    cout << "\nMax: " << max << "\nMin: " << min;
}