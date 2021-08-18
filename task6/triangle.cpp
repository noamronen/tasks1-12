#include"triangle.hpp"
triangle::triangle(point p1, point p2, point p3)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}
point triangle::getP1()
{
	return p1;
}
point triangle::getP2()
{
	return p2;
}
point triangle::getP3()
{
	return p3;
}
int triangle::num_of_points()
{
	return 3;
}
vector<double> triangle::getSides()
{
	vector<double> sides = { p1.distance(p2),p2.distance(p3),p3.distance(p1) };
	return sides;
}
vector<point> triangle::getPoints()
{
	vector<point> points = { p1,p2,p3 };
	return points;
}
double triangle::perimeter()
{
	vector<double> sides = getSides();
	double sum = 0;
	for (double i : sides)
	{
		sum += i;
	}
	return sum;
}
double triangle::area()
{
	vector<double> sides = getSides();
	sides.pop_back();
	double sum = 1;
	for (double i : sides)
	{
		sum *= i;
	}
	return sum / 2;
}
