// CS 271 - Lab 9
// Program name: Term.cpp
// Thinh Le
// April 27, 2019

#include <iostream>
#include <iomanip>
#include "Term.h"

using namespace std;

	ostream& operator<<( ostream& os, const Term& obj ) {
		os << obj.coefficient << "x^" << obj.exponent;
		return os;
	}

	istream& operator>>( istream& is, Term& obj ) {
		cin >> setw(1) >> obj.coefficient;
		cin.ignore(256, '^');
	      	cin >> setw(1) >> obj.exponent;
		return is;	
	}
	
	int coefficient;
	int exponent;
	
	Term::Term ( int coef, int exp ) {
		coefficient = coef;
		exponent = exp;
	}

	void Term::setCoefficient ( int coef ) {
		coefficient = coef;
	}

	void Term::setExponent ( int exp ) {
		exponent = exp;
	}

	int Term::getCoefficient () const {
		return coefficient;
	}

	int Term::getExponent( ) const {
		return exponent;
	}

	Term Term::operator + (const Term& obj ) const {
		if (exponent == obj.exponent)
			return Term (coefficient + obj.coefficient, exponent);
		else
			return Term (0, 0);
	}

	Term Term::operator - (const Term& obj ) const {
		if (exponent == obj.exponent)
			return Term (coefficient - obj.coefficient, exponent);
		else
		        return Term (0, 0);
	}

	Term Term::operator * (const Term& obj ) const {
		return Term (coefficient * obj.coefficient, exponent + obj.exponent);
	}
