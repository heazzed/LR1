#pragma once
#include <cmath>
#include <string>
using std::string;

class Function
{
private:
	double a, b, c, x;
public:
	Function();
	Function(double a);
	Function(double a, double b);
	Function(double a, double b, double c);

	void SetA(double a);
	double GetA();
	void SetB(double b);
	double GetB();
	void SetC(double c);
	double GetC();
	void SetX(double x);
	double GetX();

	double operator()(double x);

	string GetFunctionAsString();
};