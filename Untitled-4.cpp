#include<iostream>
using namespace std;
main () {
    int elephant_count;     //variable may contain garbage value
    int lion_count {};      //initializes to 0
    int dog_count {10};     //initializes to 10
    int cat_count {15};     //initializes to 15

//expression can be used as initializer
    int domesticated_animals { dog_count + cat_count };

    int num {2.9};     //narrowing coversion error
    cout << "Elephant count : " << elephant_count << endl;
    cout << "Lion count : " << lion_count << endl;
    cout << "Dog count : " << dog_count << endl;
    cout << "Cat count : " << cat_count << endl;
    cout << "Domesticated Count : " << domesticated_animals << endl;
}