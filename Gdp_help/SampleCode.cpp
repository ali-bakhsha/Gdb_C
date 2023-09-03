#include <iostream>
using namespace std;

void function3(){
	int variable3 = 20;
	cout << variable3 << endl;
}

void function2(){
	int variable2 = 15;
	cout << variable2 << endl;
	function3();
}

void function1(){
	int variable1 = 10;
	cout << variable1 << endl;
	function2();
}

int main(){
	int mainVal = 5;
	cout << mainVal << endl;
	
	function1();
	return 0;
}