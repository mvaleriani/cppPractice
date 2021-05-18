
#include <iostream>
#include <string>
using namespace std;

/*
    Define a table of the names of months of the year and the number of days in each month. Write out that table. 
    
    Do this using an array of structures, with each structure holding the name of a month and the number of days in it.
    
    Write a program that inputs the month number and prints the month’s name and number of days using the table above.
*/

struct Month {
    string name;
    int numDays;
};

Month getMonthInfo ( int toGet ) {
    static const Month monthTable[] = {
        Month {
            "January",
            31
        },
        Month {
            "February",
            29
        },
        Month {
            "March",
            31
        },
        Month {
            "April",
            30
        },
        Month {
            "May",
            31
        },
        Month {
            "June",
            30
        },
        Month {
            "July",
            31
        },
        Month {
            "August",
            31
        },
        Month {
            "September",
            30
        },
        Month {
            "October",
            31
        },
        Month {
            "November",
            30
        },
        Month {
            "December",
            31
        }
    };
    
    if (toGet < 1 || toGet > 12) {
        return monthTable[0];
    }
    return monthTable[ toGet - 1 ];
}

int main() {
    Month myMonth;
    myMonth = getMonthInfo(12);

    cout << myMonth.name << endl;

    return 1;
}

