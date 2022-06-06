////////////////////////Rational.cpp
#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

Rational::Rational(int a, int b) : Pair(a, b)
{
    if (b == 0)
        throw Exception("Can`t cout 0");

}

Rational::Rational(const Rational& r)
{
    *this = r;
}

Rational& Rational::operator=(const Rational& r)
{
    setpair(r);
    return *this;
}

void Rational::setpair(Pair p) throw(Exception)
{
    seta (p.geta());
	setb (p.getb());
	   if (p.getb () == 0)
		   throw Exception ("Can`t cout 0");
}

Rational::operator string() const
{
    stringstream ss;
    ss << geta() << '/' << getb();
    return ss.str();
}

ostream& operator<<(ostream& os, const Rational& r)
{
	os << r.geta() << '/' << r.getb();
	return os;
}

istream& operator>>(istream& is, Rational& r) throw (Exception)
{
	int a, b;
	cout << " a - ";
	cin >> a;
	cout << " b - ";
	cin>> b;
	if (b == 0)
		throw Exception ("Can`t cout 0");
	r.setpair(Pair(a, b));
	return is;
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	return Rational(r1.geta() * r2.getb(), r1.getb() * r2.geta());
}

bool operator==(const Rational& r1, const Rational& r2)
{
	return (r1.geta() * r2.getb() == r1.getb() * r2.geta());
}

bool operator > ( const Rational& r1, const Rational& r2)
{
	return (r1.geta() * r2.getb() > r1.getb() * r2.geta());
}

bool operator < ( const Rational& r1, const Rational& r2)
{
	return (r1.geta() * r2.getb() < r1.getb() * r2.geta());
}

