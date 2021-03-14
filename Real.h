#pragma once
#include <string>
#include <sstream>

class Real
{
public:
	double y1, y2;
	class Number
	{
	public:
		float x1, x2;
	public:
		int getDodanok1() const { return x1; }
		int getDodanok2() const { return x2; }

		void setDodanok1(double value) { x1 = value; }
		void setDodanok2(double value) { x2 = value; }

		void Init(float, float);
		void Read();
		void Display();

		float Div_x1_x2();
		float Div_x2_x1();
		float Sum();

	};
	Number l;
public:
	double getStepin1() const { return y1; }
	double getStepin2() const { return y2; }
	Number get_l() const { return l; }

	void setStepin1(double value) { y1 = value; }
	void setStepin2(double value) { y2 = value; }
	void set_l(Number value) { l = value; }

	void Init(double, double);
	void Read();
	void Display();

	double Step1();
	double Step2();
	double Log1();
	double Log2();

};
