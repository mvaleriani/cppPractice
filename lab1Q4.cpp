#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void addUniqueToOrdered ( vector<int>& ordered, int toAdd ) {
    int low = 0;
    int high = ordered.size();
    int midpoint = ordered.size() / 2;

    
}

int main() {
    ifstream inFSInts;
    ofstream outFSInts;
    int highestVal, lowestVal, currVal, numRead = 0;
    vector<int> orderedInts = {};

    inFSInts.open( "integers.txt" );
    outFSInts.open("myIntFile.txt");

    if ( !inFSInts.is_open() || !outFSInts.is_open() ) {
        cout << "Could not open file" << endl;
    }

    inFSInts >> currVal;
    highestVal = currVal;
    lowestVal = currVal;

    while ( !inFSInts.fail() ) {
        // Do stuff
        if (currVal > highestVal) { highestVal = currVal; }
        if (currVal < lowestVal) { lowestVal = currVal; }

        orderedInts.push_back( currVal );

        //Read next
        inFSInts >> currVal;
        numRead++;
    }
    
    sort(orderedInts.begin(), orderedInts.end());

    outFSInts << "Highya: " << highestVal << endl;
    outFSInts << "Low: " << lowestVal << endl;
    outFSInts << "Num Read: " << numRead << endl;

    for ( int val : orderedInts ) {
        outFSInts << val << endl;
    }

    return 1;
}

