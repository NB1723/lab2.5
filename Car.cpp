#include <sstream>
#include "Car.h"

Car::Car()
	: model(""), cylinder(0), power(0)
{}

Car::Car(const string model)
	: model(model), cylinder(0), power(0)
{}

Car::Car(const int cylinder)
	: model(""), cylinder(cylinder), power(0)
{}

Car::Car(const double power)
	: model(""), cylinder(0), power(power)
{}

Car::Car(const string model, const int cylinder, const double power)
	: model(model), cylinder(cylinder), power(power)
{}

Car::Car(const Car& m)
	: model(m.model), cylinder(m.cylinder), power(m.power)
{}

Car& Car::operator = (const Car& m)
{
	this->model = m.model;
	this->cylinder = m.cylinder;
	this->power = m.power;

	return*this;
}

ostream& operator << (ostream& out, const Car& m)
{
	out << string(m);
	return out;
}

istream& operator >> (istream& in, Car& m)
{
	string model;
	int cylinder;
	double power;
	cout << endl;
	cout << "model = ? "; cin >> model;
	cout << " Your value must be positive!" << endl;
	cout << "cylinder = ? "; cin >> cylinder;
	cout << "power ( in kW ) = ? "; cin >> power;
	m.setModel(model);
	m.setCylinder(cylinder);
	m.setPower(power);

	return in;
}

Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "model = " << model << endl;
	ss << "cylinder = " << cylinder << endl;
	ss << "power ( in kW ) = " << power << endl;

	return ss.str();
}

Car& Car::operator ++ ()
{
	++cylinder;
	return *this;
}

Car& Car::operator -- ()
{
	--cylinder;
	return *this;
}

Car Car::operator ++ (int)
{
	Car t(*this);
	power++;
	return t;
}

Car Car::operator -- (int)
{
	Car t(*this);
	power--;
	return t;
}

Car::~Car(void)
{}