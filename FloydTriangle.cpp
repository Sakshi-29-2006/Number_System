#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Floyd Traingle: "<<endl;
	for(int i = 1;i <= num;i++){
		for(int j = 1;j <= i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
