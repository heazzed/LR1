#pragma once
#include <cmath>
#include <string>
using std::string;

class Function
{
private:
	double x, c, a, b;
public:
	Function();
	Function(double x);
	Function(double x, double c);
	Function(double x, double c, double a);
	Function(double x, double c, double a, double b);

	void SetA(double a);
	double GetA();
	void SetB(double b);
	double GetB();
	void SetC(double c);
	double GetC();
	void SetX(double x);
	double GetX();

	double operator()(double x, double c, double a, double b);

	string GetFunctionAsString();
};