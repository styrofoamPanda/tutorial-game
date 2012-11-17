// game-tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Windows.h"
#include "game-tutorial.h"

using namespace std;

int main(int argc, char* argv[])
{
	int num1;
	int num4;
	int num5;
	char exit;

	cout << "Enter a number\n";
	
	cin >> num1;

	cout << "Enter an exponent\n";

	cin >> num4;

	printTime();

	cout << powerIterative(num1, num4) << "\n";

	printTime();

	cout << power(num1, num4) << "\n";

	printTime();

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

int fibIterative(int n)
{
	int result = 0;
	int j = 0;
	int temp1 = 1;
	int temp2 = 1;

	if(n < 3)
	{
		return 1;
	}
	else
	{
		while(j < n - 2)
		{
			result = temp1 + temp2;
			temp2 = temp1;
			temp1 = result;
			j++;
		}
	}

	return result;
}

int power(int x, int y)
{
	if(abs(x)<=1)
	{
		return x;
	}
	else if(y==1)
	{
		return x;
	}
	else
	{
		return x * power(x, y-1);
	}
}

int powerIterative(int m, int n)
{
	int result = m;
	
	if(abs(m) <= 1)
	{
		return m;
	}
	else
	{
		for(int j = 2; j <= n; j++)
		{
			result = m * result;
		}
	}

	return result;
}

int abs(int x)
{
	if(x < 0)
	{
		return x * (-1);
	}
	else
	{
		return x;
	}
}

void printTime()
{
	SYSTEMTIME st;

	GetSystemTime(&st);
	cout << st.wMinute << "." << st.wSecond << "." << st.wMilliseconds << "\n" ;
}