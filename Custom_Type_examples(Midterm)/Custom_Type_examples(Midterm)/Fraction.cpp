

#include <iostream>
#include <cstring>
#include "Fraction.h"

namespace math
{
	Fraction::Fraction()
	{
		this->m_denominator = 1;
		this->m_numerator = 1;
	}
	Fraction::Fraction(double numerator, double denominator) 
	{
		if (denominator != 0 and numerator != 0)
		{
			m_numerator = numerator;
			m_denominator = denominator;
		}
		else
		{
			numerator = 1;
			denominator = 1;
		}
	}
	double Fraction::fraction() const
	{
		return double (m_numerator / m_denominator);
	}
	double Fraction::newfraction(const Fraction& oth) const //second query
	{
		double Res = 0;
		if (oth.m_numerator > 0.0 and oth.m_denominator < 0.0)
		{
			double resultNump = m_numerator * oth.m_numerator;
			double resultDemp = m_denominator * oth.m_denominator;

			Res = resultNump / resultDemp;
		}

		return Res; 
	}
	void sign(const Fraction& sin)
	{
		double newno;

		newno = (-(this->m_numerator));
	}
	Fraction::operator double() const //conversion to double operator
	{
		return m_numerator / m_denominator;
	}
	Fraction::~Fraction() //destructor
	{
		m_numerator = -1;
		m_denominator = -1;
	}

}