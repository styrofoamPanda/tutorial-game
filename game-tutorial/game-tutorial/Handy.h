#ifndef HANDY_H
#define HANDY_H
class Handy
{
public:
	Handy();
	~Handy();
	int add(int x, int y);
	int fib(int x);
	int fibIterative(int n);
	int power(int x, int y);
	int powerIterative(int m, int n);
	int abs(int x);
	void printTime();
};
#endif

