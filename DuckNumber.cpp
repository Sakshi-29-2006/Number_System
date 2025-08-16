#include <iostream>
using namespace std;
int main(){
	int num, digit, first_digit, count = 0;
	//taking input from user
	cout<<"Enter a number: ";
	cin>>num;
	int temp = num;
	while(temp){
		digit = temp % 10;
		if(digit == 0){
			count++; //counting number of zeroes
		}
		temp /= 10;
	}
	first_digit = digit; //last traced digit during the loop will be the first digit
	//checking if first digit is not 0 and count of zeroes >= 0 or not
	if(first_digit != 0 && count >= 1){
		cout<<"Duck Number"<<endl;
	}
	else{
		cout<<"Not a Duck Number"<<endl;
	}
}
