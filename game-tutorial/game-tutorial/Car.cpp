#include "stdafx.h"
#include "Car.h"
#include <iostream>

Car::Car()
{
	myYear = 0;
	myKilometers = 0;
	myPrice = 0;
}

Car::Car(int year, int km, int price)
{
	myYear = year;
	myKilometers = km;
	myPrice = price;

	std::cout << "Constructor called.\n";
}

Car::~Car(){std::cout << "Destructor called.\n";}

int Car::getYear()
{
	return myYear;
}

void Car::setYear(int year)
{
	myYear = year;
}

int Car::getKilometers()
{
	return myKilometers;
}

void Car::setKilometers(int km)
{
	myKilometers = km;
}

int Car::getPrice()
{
	return myPrice;
}

void Car::setPrice(int price)
{
	myPrice = price;
}
