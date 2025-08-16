#include <iostream>
using namespace std;
int main(){
	int num, fact = 1;
	cout<<"Enter a positive number: ";
	cin>>num;
	//looping from num to one... eg:-5*4*3*2*1
	for(int i = num;i >= 1;i--){
		fact *= i; //calculating factorial
	}
	//outputting the factorial of given number
	cout<<"Factorial of given number is: "<<fact<<endl;
}
