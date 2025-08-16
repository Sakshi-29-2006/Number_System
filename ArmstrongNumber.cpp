#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num,count = 0,digit,sum = 0;
	//taking input from user
	cout<<"Enter a number: ";
	cin>>num;
	int temp = num;
	//calculating the digits of given number
	while(temp){
		temp/=10;
		count+=1;
	}
	temp = num;
	while(temp){
		digit = temp%10;
		sum+=pow(digit,count); //calculating the power of each digit^count and adding it into sum
		temp/=10;
	}
	//checking whether given number is armstrong or not
	if(sum == num){
		cout<<"Armstrong number"<<endl;
	}
	else{
		cout<<"Not armstrong number"<<endl;
	}
}
