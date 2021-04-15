#include <cmath>
#include <string>
using std::string;

class function
{
private:
	double _a;
	double _b;
	double _c;
	double _x;
public:
	function();
	function(double a);
	function(double a, double b);
	function(double a, double b, double c);
	function(double a, double b, double c, double x);

	void set_a(double a);
	double get_a() const;
	void set_b(double b);
	double get_b() const;
	void set_c(double c);
	double get_c() const;
	void set_x(double x);
	double get_x() const;

	double operator()(double a, double b, double c, double x) const;

	string get_function_as_string() const;
};