#include <iostream>
using namespace std;

int count_digits(int a){
	int num_digits = 0;
	while(a){
	     num_digits++;
	     a/=10;
	}
	return num_digits;
}
