#include <iostream>

using namespace std;

int addNum(int a, int b)
{
	int num;

	num = a+b;

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

int divideNum()
{
	int num;

	num = 8/4;

	return num;
}

void sayHi() // this is my function 
{
	cout << "hi";
}

int main(){
	int num, num2, num3, num4;
	cout << "HI GIT";
	cout << "\nHello Git";


	num = addNum(10, 19);
	num2 = subtractNum();
	num3 = multiplyNum();
	num4 = divideNum();

	cout << "\nAdd the numbers " << num;
	cout << "\nSubtract the numbers " << num2;
	cout << "\nMultiply the numbers " << num3;
	cout << "\nDivide the numbers " << num4;
	return 0;
}