#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num,count,div,cycle_num,first_digit,digit,temp_count = 0,cy_prime = 0;
	bool flag = true; // To check if a number is prime
	//input from user
	cout<<"Enter a number: ";
	cin>>num;
	// Step 1: Count number of digits in the input number
	int temp = num;
	while(temp){
		temp/=10;
		count++;
	}
	//cout<<count<<endl;
	// Store digit count for rotation process
	temp_count = count;
	temp = num;
	// Step 2: Check each rotation of the number
	while(temp_count){
//		cout<<temp<<endl;
		for(int i = 2;i <= temp - 1;i++){
			if(temp%i == 0){
				flag = false;
				break;
			}
		}
		if(flag){
			cy_prime++;
		}
		div = pow(10,(count-1));
		cycle_num = (temp%div)*10;
	//	cout<<cycle_num<<endl;
	// Find first digit of the current rotation
		while(temp){
			digit = temp%10;
			temp/=10;
		}
		
		first_digit = digit;
		cycle_num+=first_digit;
//		cout<<cycle_num<<endl;
		temp = cycle_num;
		temp_count--;
		

}
	// Step 3: Final check — if all rotations are prime
	if(cy_prime == count){
		cout<<"Circular prime"<<endl;
	}
	else{
		cout<<"Not Circular prime"<<endl;
	}
	
}
