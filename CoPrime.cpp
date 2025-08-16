#include <iostream>
using namespace std;
int main(){
	int num1, num2, temp;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	//handling of negative numbers
	if(num1 < 0){
		num1 = (-1)*num1;
	}
	if(num2 < 0){
		num2 = (-1)*num2;
	}
	//finding gcd of given numbers
	while(num2){
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	//checking whether gcd of given numbers is 1 or not
	if(num1 == 1){
		cout<<"Given numbers are co-prime"<<endl;
	}
	else{
		cout<<"Given numbers are not co-prime"<<endl;
	}
}
