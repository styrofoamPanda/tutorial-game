// game-tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int add(int x, int y);
int fib(int x);

int main(int argc, char* argv[])
{
	int num1;
	int num2;
	int num3;
	char exit;

	cout << "Enter a number\n";

	cin >> num1;

	cout << "Enter a number\n";

	cin >> num2;

	cout << "Result: " << add(num1, num2) << "\n";
	
	cout << "Enter a number\n";

	cin >> num3;

	cout << fib(num3);

	cin >> exit;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int fib(int x)
{
	if(x < 3)
	{
		return 1;
	}

	else
	{
		return fib(x-1) + fib(x-2);
	}
}