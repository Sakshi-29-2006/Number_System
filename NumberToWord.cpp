#include <iostream>
using namespace std;
int main(){
	int num, temp, digit, count = 0;
	string word_num[100]; //creating array of string to store the words
	cout<<"Enter a number: ";
	cin>>num;
	temp = num;
	// Loop until all digits are processed
	while(temp){
		digit = temp % 10;
		temp /= 10;
		//using switch case to match the digit with its word
		switch(digit){
			case 0: word_num[count] = "Zero";
			break;
			case 1: word_num[count] = "One";
			break;
			case 2: word_num[count] = "Two";
			break;
			case 3: word_num[count] = "Three";
			break;
			case 4: word_num[count] = "Four";
			break;
			case 5: word_num[count] = "Five";
			break;
			case 6: word_num[count] = "Six";
			break;
			case 7: word_num[count] = "Seven";
			break;
			case 8: word_num[count] = "Eight";
			break;
			case 9: word_num[count] = "Nine";
			break;
			
		}
		count++; //incrementing count for placing the words at consecutive indices
		
	}
	// Printing the number in words
    // We stored digits in reverse order, so print array backwards
	cout<<num<<" in words is: ";
	for(int i = count - 1;i >= 0;i--){
		cout<<word_num[i]<<" ";
	}
}
