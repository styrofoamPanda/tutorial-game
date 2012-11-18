// game-tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Windows.h"
#include "game-tutorial.h"
#include "Handy.h"
#include "Car.h"

int main(int argc, char* argv[])
{
	int num1;
	int num4;
	char exit;
	Handy handy;
	Car mercury(1984, 40000, 5500);
	Car ford;

	std::cout << mercury.getKilometers() << "\n";
	mercury.setKilometers(15000);
	std::cout << mercury.getKilometers() << "\n";
	std::cout << mercury.getYear() << "\n";
	std::cout << mercury.getPrice() << "\n\n";

	std::cout << ford.getKilometers() << "\n";
	std::cout << ford.getYear() << "\n";
	std::cout << ford.getPrice() << "\n\n";

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