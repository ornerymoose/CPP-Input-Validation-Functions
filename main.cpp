#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::numeric_limits;

int validateWholeNumberInput(); //prototype

int main(){
	validateWholeNumberInput();
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


