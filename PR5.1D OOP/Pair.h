////////////////////////Pair.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pair
{
	int a;
	int b;
	public:
		Pair (int a=1, int b=1);
		int geta() const {return a;}
		int getb() const {return b;}
		void seta(int a) {this->a = a;}
		void setb(int b) {this->b = b;}
		Pair(const Pair &p);
		Pair& operator=(const Pair &p);
		
		operator string()const;
		friend ostream& operator<<(ostream& os, const Pair& p);
		friend istream& operator>>(istream& is, Pair& p);
		friend bool operator>(const Pair& p1, const Pair& p2);
		friend bool operator<(const Pair& p1, const Pair& p2);
		friend bool operator==(const Pair& p1, const Pair& p2);
		friend Pair operator/ (const Pair& p1, const Pair& p2);
};

