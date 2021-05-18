#pragma once
#include "Car.h"

class Lorry
{
private:
	int capacity_of_car;
	Car car;

public:
	int getCapacity_of_car() const { return capacity_of_car; }
	Car getCar() const { return car; }

	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }
	void setCar(Car car) { this->car = car; }

	Lorry(const string model = "", const int cylinder = 0, const double power = 0, const int capacity_of_car = 0);
	Lorry(const Lorry& s);

	Lorry& operator = (const Lorry& s);
	friend ostream& operator << (ostream& out, const Lorry& s);
	friend istream& operator >> (istream& in, Lorry& s);
	operator string () const;

	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry operator ++ (int);
	Lorry operator -- (int);
	~Lorry(void);
};