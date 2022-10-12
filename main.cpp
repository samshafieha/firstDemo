#include <iostream>

using namespace std;

int addNum()
{
	int num;

	num = 5+4;

	return num;
}

int subtractNum()
{
	int num;

	num = 5-4;

	return num;
}

int multiplyNum()
{
	int num;

	num = 5*4;

	return num;
}

int main(){
	int num, num2, num3;
	cout << "HI GIT";
	cout << "Hello Git";

	num = addNum();
	num2 = subtractNum();
	num3 = multiplyNum();
	

	cout << "Add the numbers " << num << endl;
	cout << "Subtract the numbers " << num << endl;
	cout << "Multiply the numbers " << num << endl;

	
	return 0;
}