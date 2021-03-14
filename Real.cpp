#include "Real.h"
#include <iostream>

using namespace std;
void Real::Number::Init(float dodanok1, float dodanok2)
{
	x1 = dodanok1;
	x2 = dodanok2;
}
void Real::Number::Read()
{
	float x1, x2;
	cout << endl;
	cout << "dodanok1= "; cin >> x1;
	cout << "dodanok2= "; cin >> x2;
	cout << endl;
	Init(x1, x2);
}
void Real::Number::Display()
{
	cout << endl;
	cout << "dodanok1= " << x1 << endl;
	cout << "dodanok2= " << x2 << endl;
	cout << "suma dodankiv= " << Sum() << endl;
	cout << "dilennya(pershoho na ddruhyi)= " << Div_x1_x2() << endl;
	cout << "dilennya(druhuhu na pershyi)= " << Div_x2_x1() << endl;
}
float Real::Number::Sum()
{
	return x1 + x2;

}
float Real::Number::Div_x1_x2()   //метод ділення першого на другий
{
	return  x1 / x2;
}
float Real::Number::Div_x2_x1() //метод ділення другого на перший
{

	return x2 / x1;
}
void Real::Init(double stepin1, double stepin2)
{
	y1 = stepin1;
	y2 = stepin2;
}
void Real::Read()
{
	double y_1, y_2;
	cout << endl;
	cout << "stepin do yakoho pidnosyty pershyi vyraz: "; cin >> y1;
	cout << "stepin do yakoho pidnosymo druhyi vyraz: "; cin >> y2;
	Init(y1, y2);
}
void Real::Display()
{
	cout << endl;
	l.Display();
	cout << "stepin do yakoho pidnosyty pershyi vyraz: " << y1 << endl;
	cout << "stepin do yakoho pidnosymo druhyi vyraz: " << y2 << endl;
	cout << "rezultat pidnesennya do stepennya pershoho vyrazu: " << Step1() << endl;
	cout << "rezultat pidnesennya do stepennya druhoho vyrazu: " << Step2() << endl;
	cout << "rezultat logaryfmuvannya pershoho vyrazu: " << Log1() << endl;
	cout << "rezultat logaryfmuvannya druhoho vyrazu: " << Log2() << endl;
}
double Real::Step1()  //піднесення до степення у1 1-го виразу
{
	return pow(l.getDodanok1(), y1);
}
double Real::Step2()  //піднесення до степеня у2 2-го виразу
{
	return pow(l.getDodanok2(), y2);
}
double Real::Log1()   //логарифмування 1-го виразу
{
	return log10(l.getDodanok1());
}
double Real::Log2()    //логарифмування 2-го виразу
{
	return log10(l.getDodanok2());
}

