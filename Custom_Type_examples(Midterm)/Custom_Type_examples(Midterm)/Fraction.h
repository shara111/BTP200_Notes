

namespace math
{
	class Fraction
	{
		double m_numerator = 6;
		double m_denominator = 2;
	public:
		Fraction(); //default constructor
		Fraction(double numerator, double denominator); //custom constructor

		double fraction() const; //query

		double newfraction(const Fraction& oth) const; //second query


		void sign(const Fraction& sin);

		// double newNumo;

		//newNumo = (-(this->m_numerator));

		//double change(double numerator, double denominator); //modifier


		//
		operator double() const; //conversion to double operator


		~Fraction(); //destructor
	};
	//helper functions 
	//Fraction& operator>>(Fraction& numerator, Fraction& denominator);

	istream& operator>>(istream& is, Fraction& fraction);
}