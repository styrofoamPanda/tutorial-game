// game-tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Windows.h"
#include "game-tutorial.h"
#include "Handy.h"
#include "Car.h"

using namespace std;

int main(int argc, char* argv[])
{
	int num1;
	int num4;
	char exit;
	Handy handy;
	Car mercury(1984, 40000, 5500);
	Car ford;

	cout << mercury.getKilometers() << "\n";
	mercury.setKilometers(15000);
	cout << mercury.getKilometers() << "\n";
	cout << mercury.getYear() << "\n";
	cout << mercury.getPrice() << "\n\n";

	cout << ford.getKilometers() << "\n";
	cout << ford.getYear() << "\n";
	cout << ford.getPrice() << "\n\n";

	cout << "Enter a number\n";
	cin >> num1;
	cout << "Enter an exponent\n";
	cin >> num4;

	handy.printTime();
	cout << handy.powerIterative(num1, num4) << "\n";
	handy.printTime();
	cout << handy.power(num1, num4) << "\n";
	handy.printTime();

	cin >> exit;

	return 0;
}