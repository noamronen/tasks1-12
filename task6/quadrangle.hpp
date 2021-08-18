#pragma once
#include"polygon.hpp"
class quadrangle : public polygon
{
private:
	point p1;
	point p2;
	point p3;
	point p4;
public:
	quadrangle(point p1, point p2, point p3,point p4);
	point getP1();
	point getP2();
	point getP3();
	point getP4();
	int num_of_points();
	vector<double> getSides();
	vector<point> getPoints();
	double perimeter();
	double area();
};
