#include "Function.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	function A;
	cout << "A | " << A.get_function_as_string() << A(5, 4, 3, 1) << endl;
	cout << "Params A | " << "x:" << A.get_x() << " c:" << A.get_c() << " a:" << A.get_a() << " b:" << A.get_b() << endl;

	cout << endl;

	function I;
	I.set_x(45.21);
	I.set_a(-11.12);
	I.set_c(10.2);
	cout << "I | " << I.get_function_as_string() << I(I.get_x(), I.get_c(), I.get_a(), I.get_b()) << endl;

	cout << endl;

	function T(22.8);
	cout << "T | " << T.get_function_as_string() << T(T.get_x(), T.get_c(), T.get_a(), T.get_b()) << endl;

	cout << endl;

	function F(10.1, 14.4);
	F.set_b(5.3);
	cout << "F | " << F.get_function_as_string() << F(F.get_x(), F.get_c(), F.get_a(), F.get_b()) << endl;

	cout << endl;

	function S(-1.1, 34.2, -210.6);
	cout << "S | " << S.get_function_as_string() << S(S.get_x(), S.get_c(), S.get_a(), S.get_b()) << endl;

	cout << endl;

	function L(15.2, -5.8, 20.5, 44.4);
	cout << "L | " << L.get_function_as_string() << L(L.get_x(), L.get_c(), L.get_a(), L.get_b()) << endl;

	return 0;
}