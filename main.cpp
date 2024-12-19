//Programmer: Sophia Bhoria
//Date: Sept 10, 2024
//Purpose: Use the knowledge of for loops and operators to create a fucntion that prints out digits of a inputed value after some commands

#include <iostream>
using namespace std;

int main()
{
	int user_num; 
	cout << "Please enter a positive number of length 5: " << endl; //ask for the 5 digit number 
	cin >> user_num;

	int result;
	for (int i = 5; i > 0; --i){
		int digit = user_num % 10; // Get the last digit
		user_num /= 10; // Remove the last digit

		//check if the digit is even 	
		if (digit % 2 == 0){
			result = (digit + 5) % 10; //add 5 and then get the right most digit 
			cout << result << endl; //print that digit
		}

		//check if the digit is odd	
		if (digit % 2 != 0){
			result = digit - 8; //subtract the 8
			if (result < 0){  // see if it is negative
				result = (result * result); //if yes then square it
				if (result > 9) { // check if the square is double digit
					result = result / 10; //if yes then get the left most digit
				}
			}
			cout << result << endl; // print out that digit
		}

	}

	return 0;
}
