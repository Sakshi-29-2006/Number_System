#include <iostream>
using namespace std;
int main(){
	//creating an integer array for storing factors of given number
	//initializing idx=0 
	int num, factors[30], idx = 0;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i = 1;i <= num;i++){
		//checking divisibility of number with every iteration from 1 to num
		if(num %i == 0){
			factors[idx] = i; 
			idx++; //incrementing idx
		}
	}
	//outputting the factors of given number
	cout<<"Factors of "<<num<<" are: ";
	for(int i = 0;i < idx;i++){
		cout<<factors[i]<<" ";
	}
}
