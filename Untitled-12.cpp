#include<iostream>
using namespace std;
int main () {
    int arr[5];
    int key, flag = 0;
    cout << "Enter 5 Values : ";
    for (int i=0;i<5;i++) {
        cin >> arr[i];
    }
    cout << "Enter Value : ";
    cin >> key;
    for (int i=0 ; i<5;i++) {
        for (int j=i+1;j<5
        ;j++) {
            for(int k=j+1;k<5;k++) {
                if (arr[i]+arr[j]+arr[k] == key) {
                    cout << "\nTriplet Found : " << arr[i]<< " " << arr[j]<< " " << arr[k];
                    flag++;
                }
            }
            }
        }
        if (flag == 0) {
            cout << "\nNo Triplet Found!";
        }
}