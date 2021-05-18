#include "Lorry.h"
#include <sstream>

Lorry::Lorry(const string model, const int cylinder, const double power, const int capacity_of_car)
	: car(model, cylinder, power), capacity_of_car(capacity_of_car)
{}

Lorry::Lorry(const Lorry& s)
{
	car = s.car;
	capacity_of_car = s.capacity_of_car;
}

Lorry& Lorry::operator =(const Lorry& s)
{
	car = s.car;
	capacity_of_car = s.capacity_of_car;
	return*this;
}

ostream& operator << (ostream& out, const Lorry& s)
{
	out << string(s);
	return out;
}

istream& operator >> (istream& in, Lorry& s)
{
	int  capacity_of_car;
	cout << endl;
	cout << "Car = ? "; in >> s.car;
	cout << "capacity_of_car = ? "; in >> capacity_of_car;
	s.setCapacity_of_car(capacity_of_car);

	return in;
}

Lorry::operator string () const {
	stringstream ss;
	ss << "capacity_of_car = " << capacity_of_car << endl;
	return string(car) + ss.str();
}

Lorry& Lorry::operator ++ () {
	++car;
	return *this;
}

Lorry& Lorry::operator -- () {
	--car;
	return *this;
}

Lorry Lorry::operator ++ (int)
{
	Lorry s(*this);
	car++;
	return s;
}

Lorry Lorry::operator -- (int)
{
	Lorry s(*this);
	car--;
	return s;
}

Lorry::~Lorry(void)
{}