#include "Function.h"

function::function(): function(0) {}

function::function(double x) : function(x, 0, 1, 1) {}

function::function(double x, double c) : function(x, c, 1, 1) {}

function::function(double x, double c, double a) : function(x, c, a, 1) {}

function::function(double x, double c, double a, double b) : _x(x), _c(c), _a(a), _b(b) {}

void function::set_x(double x) {
	_x = x;
}

double function::get_x() {
	return _x;
}

void function::set_c(double c) {
	_c = c;
}

double function::get_c() {
	return _c;
}

void function::set_a(double a) {
	if (a == 0)
		_a = 1;
	else
		_a = a;
}

double function::get_a() {
	return _a;
}

void function::set_b(double b) {
	if (b == 0)
		_b = 1;
	else
		_b = b;
}

double function::get_b() {
	return _b;
}

double function::operator()(double x, double c, double a, double b) {
	double result;
	if (x <= c)
		result = (c - x) / a;
	else
		result = (x - c) / b;
	return exp(result);
}

string function::get_function_as_string() {
	string result = "e^(";
	if (_x <= _c) {
		result += std::to_string(_c);
		if (_x < 0) {
			result += "+";
			result += std::to_string(abs(_x));
		}
		else {
			result += "-";
			result += std::to_string(_x);
		}
		result += "/";
		result += std::to_string(_a);
		result += ") = ";
	}
	else {
		result += std::to_string(_x);
		if (_c < 0) {
			result += "+";
			result += std::to_string(abs(_c));
		}
		else {
			result += "-";
			result += std::to_string(_c);
		}
		result += "/";
		result += std::to_string(_b);
		result += ") = ";
	}
	return result;
}