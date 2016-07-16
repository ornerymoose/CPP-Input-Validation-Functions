#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::numeric_limits;

int validateWholeNumberInput(); //prototype
string validateCharacterInput(); //prototype

int main(){
	//validateWholeNumberInput();
	//validateDoubleInput();
	validateCharacterInput();

	//throw the following 13 lines into a function for accepting positive whole number input
	int size;
	cin >> size;
	bool valid = true;
	while (valid){
		if(cin.fail() || cin.peek() != '\n' || size <= 0){
			cin.clear();
			cin.ignore(std::numeric_limits<int>::max(), '\n');
			cout << "You must enter a positive integer, please try again:\n";
			cin >> size;
		} else {
			valid = false;
		}
	}
	return 0;
}

int validateWholeNumberInput(){
	int number;
	bool valid = true;
	cout << "Please enter a whole number: \n";
	while (valid){
		cin >> number;
		if(cin.fail() || cin.peek() != '\n'){
			cin.clear();
			cin.ignore(std::numeric_limits<int>::max(), '\n');
			cout << "That is not a whole number, try again: \n";
		} else {
			valid = false;
		}
	}
	return number;
}



string validateCharacterInput(){
	char c;
	string input;
	//bool valid = true;
	while (getline(cin, input) || cin.peek() != '\n'){
    	// Iterate through the string one letter at a time.
    	for (int i = 0; i < input.length(); i++) {
        	c = input.at(i); // Get a char from string

        	// if it's NOT within these bounds, then it's not a character
        	if (! (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) {
            	cout << "Not a valid string" << endl;
        	}
     	}
 	}
 	return input;
}
