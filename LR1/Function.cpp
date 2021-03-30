#include "function.h"

function::function(): function(1, 1, 0, 0) {}

function::function(double a) : function(a, 1, 0, 0) {}

function::function(double a, double b) : function(a, b, 0, 0) {}

function::function(double a, double b, double c) : function(a, b, c, 0) {}

function::function(double a, double b, double c, double x) :  _a(a), _b(b), _c(c), _x(x) {}

void function::set_a(double a) {
	if (a == 0)
		_a = 1;
	else
		_a = a;
}

double function::get_a() const{
	return _a;
}

void function::set_b(double b) {
	if (b == 0)
		_b = 1;
	else
		_b = b;
}

double function::get_b() const{
	return _b;
}

void function::set_c(double c) {
	_c = c;
}

double function::get_c() const {
	return _c;
}

void function::set_x(double x) {
	_x = x;
}

double function::get_x() const {
	return _x;
}

double function::operator()(double a, double b, double c, double x) const {
	double result;
	if (x <= c)
		result = (c - x) / a;
	else
		result = (x - c) / b;
	return exp(result);
}

string function::get_function_as_string() const {
	string str_function = "e^(";
	if (_x <= _c) {
		str_function += std::to_string(_c);
		if (_x < 0) {
			str_function += "+";
			str_function += std::to_string(abs(_x));
		}
		else {
			str_function += "-";
			str_function += std::to_string(_x);
		}
		str_function += "/";
		str_function += std::to_string(_a);
		str_function += ") = ";
	}
	else {
		str_function += std::to_string(_x);
		if (_c < 0) {
			str_function += "+";
			str_function += std::to_string(abs(_c));
		}
		else {
			str_function += "-";
			str_function += std::to_string(_c);
		}
		str_function += "/";
		str_function += std::to_string(_b);
		str_function += ") = ";
	}
	return str_function;
}