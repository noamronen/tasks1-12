#pragma once
#include"quadrangle.hpp"
quadrangle::quadrangle(point p1, point p2, point p3,point p4)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
	this->p4 = p4;
}
point quadrangle::getP1()
{
	return p1;
}
point quadrangle::getP2()
{
	return p2;
}
point quadrangle::getP3()
{
	return p3;
}
point quadrangle::getP4()
{
	return p4;
}
int quadrangle::num_of_points()
{
	return 4;
}
vector<double> quadrangle::getSides()
{
	vector<double> sides = { p1.distance(p2),p2.distance(p3),p3.distance(p4),p4.distance(p1) };
	return sides;
}
vector<point> quadrangle::getPoints()
{
	vector<point> points = { p1,p2,p3,p4 };
	return points;
}
double quadrangle::perimeter()
{
	vector<double> sides = getSides();
	double sum = 0;
	for (double i : sides)
	{
		sum += i;
	}
	return sum;
}
double quadrangle::area()
{
	return pow(p1.distance(p2), 2);
}
