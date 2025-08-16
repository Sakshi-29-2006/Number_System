#include <iostream>
using namespace std;
int main(){
	int fib0 = 0, fib1 = 1, sum;
	int num, i = 0;
	cout<<"Enter number for range: ";
	cin>>num;
	cout<<"Fibonacci series from 0 to "<<num<<" is: "<<endl;
	while(i<=num){
		cout<<fib0<<endl;
		sum = fib0 + fib1;
		fib0 = fib1;
		fib1 = sum; 
		i++;
	}
}
