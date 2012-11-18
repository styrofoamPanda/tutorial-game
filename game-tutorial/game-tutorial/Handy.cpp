#include "StdAfx.h"
#include "Handy.h"
#include <iostream>
#include "Windows.h"

using namespace std;

Handy::Handy()
{
}


Handy::~Handy()
{
}

int Handy::add(int x, int y)
{
	return x + y;
}

int Handy::fib(int x)
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

int Handy::fibIterative(int n)
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

int Handy::power(int x, int y)
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

int Handy::powerIterative(int m, int n)
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

int Handy::abs(int x)
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

void Handy::printTime()
{
	SYSTEMTIME st;

	GetSystemTime(&st);
	cout << st.wMinute << "." << st.wSecond << "." << st.wMilliseconds << "\n" ;
}
