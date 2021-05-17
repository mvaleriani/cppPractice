
#include <iostream>
#include <cmath>
using namespace std;

/*
    An integer is said to be prime if it’s divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.

        a) Write a function that determines whether a number is prime.

        b) Use this function in a program that determines and prints all the prime numbers between 2 and 10,000. 
           How many of these numbers do you really have to test before being sure that you’ve found all the primes?

        c) Initially, you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need only go as high as the square root of n.
*/

bool isPrime( int toCheck ) {
    int upperLimit = sqrt( toCheck );

    for (int i = 2; i <= upperLimit; i++) {
        if ( toCheck % i == 0 ) { return false; }
    }

    return true;
}

int main() {
    int incrementVal = 1;
    for ( int i = 1; i < 9999; i += incrementVal) {
        if ( isPrime( i ) ) { cout << i << endl; }
        if ( i == 3 ) { incrementVal = 2; }
    }

    return 1;
}

