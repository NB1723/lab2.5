#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
	string model;
	int cylinder;
	double power;

public:
	string getModel() const { return model; }
	int getCylinder() const { return cylinder; }
	double getPower() const { return power; }

	void setModel(string model) { this->model = model; };
	void setCylinder(int cylinder) { this->cylinder = cylinder; };
	void setPower(double power) { this->power = power; };

	Car();
	Car(const string model);
	Car(const int cylinder);
	Car(const double power);
	Car(const string model, const int cylinder, const double power);
	Car(const Car& m);

	Car& operator = (const Car& m);

	friend ostream& operator << (ostream& out, const Car& m);
	friend istream& operator >> (istream& in, Car& m);
	operator string () const;

	Car& operator ++ ();
	Car& operator -- ();
	Car operator ++ (int);
	Car operator -- (int);

	~Car(void);
};