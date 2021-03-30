#include "function.h"
#include <iostream>
using namespace std;

int main() {
	function f1;
	cout << "f1 | " << f1.get_function_as_string() << f1(1, 1, 0, 0) << endl;

	cout << endl;

	function f2;
	f2.set_a(45.21);
	f2.set_b(5.3);
	f2.set_c(10.2);
	cout << "f2 | " << f2.get_function_as_string() << f2(45.21, 5.3, 10.2, 0) << endl;
	cout << "Attributes f2:" << endl << "f2._a=" << f2.get_a() << ", f2._b=" << f2.get_b() << ", f2._c=" 
		<< f2.get_c() << ", f2._x=" << f2.get_x() << endl;

	cout << endl;

	function f3(f2);
	f3.set_x(-5.1);
	cout << "f3 | "<< f3.get_function_as_string() << f3(45.21, 5.3, 10.2, -5.1) << endl;
	cout << "Attributes f3:" << endl << "f3._a=" << f3.get_a() << ", f3._b=" << f3.get_b()  << ", f3._c="
		<< f3.get_c() << ", f3._x=" << f3.get_x() << endl;

	cout << endl;

	function f4(22.8);
	cout << "f4 | " << f4.get_function_as_string() << f4(22.8, 1, 0, 0) << endl;

	cout << endl;

	function f5(10.1, 14.4);
	cout << "f5 | " << f5.get_function_as_string() << f5(10.1, 14.4, 0, 0) << endl;

	cout << endl;

	function f6(-1.1, 34.2, -210.6);
	cout << "f6 | " << f6.get_function_as_string() << f6(-1.1, 34.2, -210.6, 0) << endl;

	cout << endl;

	function f7(15.2, -5.8, 20.5, 44.4);
	cout << "f7 | " << f7.get_function_as_string() << f7(15.2, -5.8, 20.5, 44.4) << endl;
	cout << "Attributes f7:" << endl << "f7._a=" << f7.get_a() << ", f7._b=" << f7.get_b() << ", f7._c=" << f7.get_c() << ", f7._x=" << f7.get_x() << endl;

	return 0;
}