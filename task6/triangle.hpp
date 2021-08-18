#pragma once;
#include "polygon.hpp"
class triangle : public polygon
{
private:
	point p1;
	point p2;
	point p3;
public:
	triangle(point p1, point p2, point p3);
	point getP1();
	point getP2();
	point getP3();
	int num_of_points();
	vector<double> getSides();
	vector<point> getPoints();
	double perimeter();
	double area();
};
