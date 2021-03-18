#include "Function.h"

Function::Function() {
	SetX(0);
	SetC(0);
	SetA(1);
	SetB(1);
}

Function::Function(double x) : Function() {
	SetX(x);
}

Function::Function(double x, double c) : Function(x) {
	SetC(c);
}

Function::Function(double x, double c, double a) : Function (x, c) {
	SetA(a);
}

Function::Function(double x, double c, double a, double b) : Function(x, c, a) {
	SetB(b);
}

void Function::SetX(double x) {
	this->x = x;
}

double Function::GetX() {
	return x;
}

void Function::SetC(double c) {
	this->c = c;
}

double Function::GetC() {
	return c;
}

void Function::SetA(double a) {
	if (a == 0)
		this->a = 1;
	else
		this->a = a;
}

double Function::GetA() {
	return a;
}

void Function::SetB(double b) {
	if (b == 0)
		this->b = 1;
	else
		this->b = b;
}

double Function::GetB() {
	return b;
}

double Function::operator()(double x, double c, double a, double b) {
	SetX(x);
	SetC(c);
	SetA(a);
	SetB(b);
	double result;
	if (x <= c)
		result = (c - x) / a;
	else
		result = (x - c) / b;
	return exp(result);
}

string Function::GetFunctionAsString() {
	string result = "e^(";
	if (x <= c) {
		result += std::to_string(c);
		if (x < 0) {
			result += "+";
			result += std::to_string(abs(x));
		}
		else {
			result += "-";
			result += std::to_string(x);
		}
		result += "/";
		result += std::to_string(a);
		result += ") = ";
	}
	else {
		result += std::to_string(x);
		if (c < 0) {
			result += "+";
			result += std::to_string(abs(c));
		}
		else {
			result += "-";
			result += std::to_string(c);
		}
		result += "/";
		result += std::to_string(b);
		result += ") = ";
	}
	return result;
}