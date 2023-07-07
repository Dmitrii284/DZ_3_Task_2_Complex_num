#include"Header.h" 


	 Complex::Complex() { }
	 Complex::Complex(double real) : _real{ real }, _imag{ _imag = 0 } { }
	 Complex::Complex(double real, double imag) : _real{ real }, _imag{ imag } { }

	void Complex::Show()
	{
		std::cout << '(' << _real << ',' << _imag << ')' << std::endl;
	}

	Complex Complex :: operator+(const Complex& c)
	{
		_real += c._real;
		_imag += c._imag;
		return *this;
	}

	inline Complex Complex::operator-(const Complex& c)
	{
		_real -= c._real;
		_imag -= c._imag;
		return *this;
	}

	inline Complex Complex::operator*(const Complex& c)
	{
		double a, b;
		a = _real *= c._real;
		b = _imag *= c._imag;
		a += b;
		return *this;
	}

	Complex Complex::operator/(const Complex& c)
	{
		double a, b;
		a = _real /= c._real;
		b = _imag /= c._imag;
		a += b;
		return *this;
	}
