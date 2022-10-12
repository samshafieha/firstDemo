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
	cout << "\nHello Git";

	num = addNum();
	num2 = subtractNum();
	num3 = multiplyNum();
	

	cout << "\nAdd the numbers " << num;
	cout << "\nSubtract the numbers " << num2;
	cout << "\nMultiply the numbers " << num3;

	
	return 0;
}