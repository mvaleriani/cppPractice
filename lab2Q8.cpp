

#include <iostream>
using namespace std;

/*
    Write a complete C++ program with the two alternate functions specified below,
    each of which simply triples the variable count defined in main. Then compare and contrast the two approaches.
    These two functions are:

    a) function tripleByValue that passes a copy of count by value, triples the copy and returns the new value and

    b) function tripleByReference that passes count by reference via a reference parameter and
       triples the original value of count through its alias (i.e., the reference parameter).
*/

double tripleByValue ( double currVal ) {
    return currVal * 3;
}

void tripleByReference( double& currVal ) {
    currVal *= 3;
}

int main() {
    double count = 3.0;

    cout << count << " - " << tripleByValue(count) << endl;

    tripleByReference(count);
    cout << count << endl;

    return 1;
}
