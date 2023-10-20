#include <iostream>
using namespace std;

int factorial(int x);
int count_digits(int y);

int main(){
	int a;
	cin>>a;
	int value = factorial(a);
	int ans = count_digits(value);
	cout<<"The factorial is: "<<value<<endl; 
	cout<<"No. of digits = "<<ans<<endl;
	return 0;
}
