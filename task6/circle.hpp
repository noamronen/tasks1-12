#pragma once
#include"shape.hpp"
#include"point.hpp"
class circle : public shape
{
private:
	point center;
	double radious;
public:
	const double pai = 3.14;
	circle(point center, double radious);
	point getCenter();
	double getRadious();
	double perimeter();
	double area();
};
