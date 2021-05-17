#include <iostream>
using namespace std;

/*
    Write a function that takes the time as three integer arguments (hours, minutes and seconds) 
    and returns the number of seconds since the last time the clock “struck 12.” 

    Use this function to calculate the amount of time in seconds between two times,
    both of which are within one 12-hour cycle of the clock.  
*/

int secsSince12 (int hours, int mins, int secs) {
    int totalSecs = 0;

    if ( hours != 12 ) {
        totalSecs += hours * 3600;
    }
    return totalSecs + (mins * 60) + secs;
}

int main() {
    int secsSince1, secsSince2;



    cout << secsSince12(12, 0, 0) << endl;

    cout << secsSince12(1, 0, 0) << endl;
    
    return 1;
}

