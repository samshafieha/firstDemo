//
//  main.cpp
//  Git Intro Project
//
//  Created by Trevor Holm on 10/12/22.
//

#include <iostream>

using namespace std;

void adding(int num1, int num2);
void subtracting(int num1, int num2);

int main()
{
    int num1 = 11;
    int num2 = 7;
    
    adding(num1, num2);
    subtracting(num1, num2);
    
    return 0;
}

void adding(int num1, int num2)
{
    int sum = num1 + num2;
    cout << sum << endl;
}

void subtracting(int num1, int num2)
{
    int sum = num1 - num2;
    cout << sum << endl;
}