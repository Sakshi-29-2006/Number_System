#include <iostream>
using namespace std;
int main(){
	int num;
	//taking input from user
	cout<<"Enter a number: ";
	cin>>num;
	//using if condition to check whether given number
	//buzz number or not
	if((num %7 == 0) || (num % 10 == 7)){
		cout<<"Buzz number"<<endl;
	}
	else{
		cout<<"Not buzz number"<<endl;
	}
}
