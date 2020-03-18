#ifndef FRAC_H
#define FRAC_H
#pragma once
#include <iostream>

class Fraction
{
private:
	int num;
	int den;

	//don't necessarily need
	void enforceConditions();
	void reduce();

public:
	Fraction();
	//Fraction(int);
	Fraction(int num1, int den1);
	Fraction(const Fraction &old_obj);
	//~Fraction();
	int getnum();
	void setnum(int num1);
	int getden();
	void setden(int den1);

	const Fraction& operator=(const Fraction&);
	Fraction operator +(Fraction const &obj);
	Fraction operator -(Fraction const &obj);
	Fraction operator *(Fraction);
	Fraction operator /(Fraction);

	//int gcd(int num1, int num2);
};


class FracList
{
private:
	Fraction *fracPtr;
	int size;

public:
	FracList();
	FracList(int size);
	~FracList();

	const FracList& operator=(const FracList&);
	FracList operator +(FracList const &obj);
	FracList operator -(FracList const &obj);
	FracList operator *(FracList);
	FracList operator /(FracList);

	//int gcd(int num1, int num2);
};

#endif


