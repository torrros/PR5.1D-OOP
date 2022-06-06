////////////////////////Source.cpp
#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	try
	{
		Rational pr, p{ 1,8 };
		cin >> pr;
		cout << pr / p << endl;
		if (pr == p)
			cout << "Equal";
		else
			cout << "Not equal";
		cout << endl;

		if (pr > p)
			cout << "Great";
		else
			cout << "Less";
		cout << endl;

		if (pr < p)
			cout << "Great";
		else
			cout << "Less";
	}
	catch( Exception e)
	{
		cout << "Exception - " << e.what() << endl;
	}

	return 0;
}