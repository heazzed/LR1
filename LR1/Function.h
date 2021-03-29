#pragma once
#include <cmath>
#include <string>
using std::string;

class function
{
private:
	double _x;
	double _c;
	double _a;
	double _b;
public:
	function();
	function(double x);
	function(double x, double c);
	function(double x, double c, double a);
	function(double x, double c, double a, double b);

	void set_a(double a);
	double get_a();
	void set_b(double b);
	double get_b();
	void set_c(double c);
	double get_c();
	void set_x(double x);
	double get_x();

	double operator()(double x, double c, double a, double b);

	string get_function_as_string();
};