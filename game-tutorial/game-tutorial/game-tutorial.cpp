// game-tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Handy.h"
#include "Car.h"

void selector(int x);
void gridPrint(int size);

int main(int argc, char* argv[])
{
	int num1;
	int num4;
	int num5;
	char exit;
	Handy handy;
	Car mercury(1984, 40000, 5500);
	Car ford;
	Car cars[10];

	for(int m = 0; m < 10; m++)
	{
		cars[m] = mercury;
		cars[m].setKilometers(m * 1000);

		std::cout << m << ": " << cars[m].getKilometers() << "\n";
	}

	gridPrint(10);
	std::cout << "\n\n";
	gridPrint(5);
	std::cout << "\n\n";

	std::cout << mercury.getKilometers() << "\n";
	mercury.setKilometers(15000);
	std::cout << mercury.getKilometers() << "\n";
	std::cout << mercury.getYear() << "\n";
	std::cout << mercury.getPrice() << "\n\n";

	std::cout << ford.getKilometers() << "\n";
	std::cout << ford.getYear() << "\n";
	std::cout << ford.getPrice() << "\n\n";

	std::cout << "Enter a number between 0 and 4.\n";
	std::cin >> num5;
	selector(num5);

	std::cout << "Enter a number\n";
	std::cin >> num1;
	std::cout << "Enter an exponent\n";
	std::cin >> num4;

	handy.printTime();
	std::cout << handy.powerIterative(num1, num4) << "\n";
	handy.printTime();
	std::cout << handy.power(num1, num4) << "\n";
	handy.printTime();

	std::cin >> exit;

	return 0;
}

void selector(int x)
{
	switch(x)
	{
		case 0: 
			std::cout << "Welcome!\n";
			break;
		case 1: 
			std::cout << "Fire in the Hole!\n";
			break;
		case 2:
			std::cout << "Follow me!\n";
			break;
		case 3:
			std::cout << "Fall back!\n";
			break;
		case 4:
			std::cout << "Lead the way!\n";
			break;
		default:
			std::cout << "Invalid selection!\n";
			break;
	}
}

void gridPrint(int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			std::cout << "0";
		}
		std::cout << "\n";
	}
}