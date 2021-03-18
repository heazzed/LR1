#include "Function.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	Function A;
	cout << "A | " << A.GetFunctionAsString() << A(5, 4, 3, 1) << endl;
	cout << "Params A | " << "x:" << A.GetX() << " c:" << A.GetC() << " a:" << A.GetA() << " b:" << A.GetB() << endl;

	cout << endl;

	Function I;
	I.SetX(45.21);
	I.SetA(-11.12);
	I.SetC(10.2);
	cout << "I | " << I.GetFunctionAsString() << I(I.GetX(), I.GetC(), I.GetA(), I.GetB()) << endl;

	cout << endl;

	Function T(22.8);
	cout << "T | " << T.GetFunctionAsString() << T(T.GetX(), T.GetC(), T.GetA(), T.GetB()) << endl;

	cout << endl;

	Function F(10.1, 14.4);
	F.SetB(5.3);
	cout << "F | " << F.GetFunctionAsString() << F(F.GetX(), F.GetC(), F.GetA(), F.GetB()) << endl;

	cout << endl;

	Function S(-1.1, 34.2, -210.6);
	cout << "S | " << S.GetFunctionAsString() << S(S.GetX(), S.GetC(), S.GetA(), S.GetB()) << endl;

	cout << endl;

	Function L(15.2, -5.8, 20.5, 44.4);
	cout << "L | " << L.GetFunctionAsString() << L(L.GetX(), L.GetC(), L.GetA(), L.GetB()) << endl;

	return 0;
}