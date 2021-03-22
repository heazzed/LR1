#include "Function.h"
#include <iostream>
using namespace std;

int main() {
	Function A;
	cout << A.GetFunctionAsString() << A(5.1) << endl;
	cout << "Params:" << " a=" << A.GetA() << " b=" << A.GetB() << " c=" << A.GetC() << " x=" << A.GetX() << endl;

	cout << endl;

	Function I;
	I.SetX(45.21);
	I.SetA(22.11);
	I.SetB(-11.12);
	I.SetC(10.2);
	cout << I.GetFunctionAsString() << I(I.GetX()) << endl;
	cout << "Params:" << " a=" << I.GetA() << " b=" << I.GetB() << " c=" << I.GetC() << " x=" << I.GetX() << endl;

	cout << endl;

	Function T(42.8);
	cout << T.GetFunctionAsString() << T(9.23) << endl;
	cout << "Params:" << " a=" << T.GetA() << " b=" << T.GetB() << " c=" << T.GetC() << " x=" << T.GetX() << endl;

	cout << endl;

	Function F(10.1, 14.4);
	cout << F.GetFunctionAsString() << F(1) << endl;
	cout << "Params:" << " a=" << F.GetA() << " b=" << F.GetB() << " c=" << F.GetC() << " x=" << F.GetX() << endl;

	cout << endl;

	Function S(-1.1, 34.2, -210.6);
	cout << S.GetFunctionAsString() << S(S.GetX()) << endl;
	cout << "Params:" << " a=" << F.GetA() << " b=" << F.GetB() << " c=" << F.GetC() << " x=" << F.GetX() << endl;

	cout << endl;
	return 0;
}