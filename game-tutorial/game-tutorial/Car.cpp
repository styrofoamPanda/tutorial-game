#include "stdafx.h"
#include "Car.h"

int myPrice;
int myKilometers;
int myYear;

Car::Car(){}

Car::Car(int year, int km, int price)
{
	myYear = year;
	myKilometers = km;
	myPrice = price;
}

Car::~Car(){}

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
