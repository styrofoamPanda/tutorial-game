#ifndef CAR_H
#define CAR_H
#include "stdafx.h"

class Car
{
public:
	Car();
	Car(int year, int kilometers, int price);
	~Car();
	int getYear();
	void setYear(int year);
	int getKilometers();
	void setKilometers(int km);
	int getPrice();
	void setPrice(int price);
private:
	int myPrice;
	int myKilometers;
	int myYear;
};
#endif
