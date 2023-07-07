#ifndef HEADER_H;
#define HEADER_H

class Complex
{
private:
	double _real;
	double _imag;
public:
	Complex();
	explicit Complex(double real);
	Complex(double real, double imag);
	~Complex() { }

	void Show();
	Complex operator+(const Complex& c);
	Complex operator-(const Complex& c);
	Complex operator*(const Complex& c);
	Complex operator/(const Complex& c);

};



#endif // !HEADER_H;