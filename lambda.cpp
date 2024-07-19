/*[capture][parameters] -> return_type {
    //function body
}

capture - specified which variables from the surrounding scope are captured and how (by value or by reference)

parameters: the parameters for the lambda function (similar to regular function parameters).

Return type: the return type of the lambda function. This is optional and can often be inferred by the compiler .

function body : the actual code that gets executed when the lambda is called.

*/

#include<iostream>
using namespace std;

int main () {
    auto add = [](int a, int b) {return a+b;};
    cout << "Sum : " << add(3,4) << endl;
}