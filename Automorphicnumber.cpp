#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num,count = 0;
	//taking input from the user
	cout<<"Enter a number: ";
	cin>>num;
	int temp = num,sq = num * num;
	//counting the number of digits
	while(temp){
		temp/=10;
		count++;
	}
// Compute divisor = 10^count
//   Example: if num = 76 then count = 2 then div = 100
	int div = pow(10,count);
//	cout<<div<<endl;
// checking last two digits of num are equal to its square or not
	if((sq%div) == num){
		cout<<"Automorphic number"<<endl;
	}
	else{
		cout<<"Not automorphic number"<<endl;
	}
	
}
