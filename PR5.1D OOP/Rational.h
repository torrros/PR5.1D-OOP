////////////////////////Rational.h
#pragma once
#include "Pair.h"
#include "Exception.h"
#include <iostream>
#include <string>

using namespace std;

class Rational : public Pair
{
public:
	Rational(int a = 1, int b = 1) throw(Exception);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	Pair getpair() const { return *this; }
	void setpair(Pair p) throw (Exception);

	operator string () const;
	friend ostream& operator<<(ostream& os, const Rational& r);
	friend istream& operator>>(istream& is, Rational& r);
	
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
};

