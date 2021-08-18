#pragma once
#include"circle.hpp"
#include <cmath>
circle::circle(point center, double radious)
{
	this->center = center;
	this->radious = radious;
}
point circle::getCenter()
{
	return center;
}
double circle::getRadious()
{
	return radious;
}
double circle::perimeter()
{
	return 2 * pai * radious;
}
double circle::area()
{
	return pai * pow(radious, 2);
}
