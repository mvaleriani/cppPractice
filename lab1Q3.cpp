include <iostream> 
include <string> 
using namespace std;

/*
Write a program that inputs a series of integers and passes them one at a time to function isEven, which uses the modulus operator to determine whether an integer is even. The function should take an integer argument and return true if the integer is even and false otherwise.
*/


bool IsEven ( int toCheck ) {
	return ( toCheck % 2 == 0 );
}

int main() {
   	string userInt;    
	
	cout << "Input an integer to check if it is even. Input 'q' when done" << endl;
        getline(cin, userInt);


	while ( userInt != "q" ) {
        	cout << userInt << " is an" << ( IsEven( stoi( userInt ) ) ? " even " : " odd" ) << " number" << endl;
		
		cout << "Input an integer to check if it is even. Input 'q' when done" << endl;
          	getline(cin, userInt);
	} 

}
