#pragma once
#include"point.hpp"
#include<cmath>
using namespace std;
point::point()
{

}
point::point(double x, double y)
{
	this->x = x;
	this->y = y;
}
double point::getX()
{
	return x;
}
double point::getY()
{
	return y;
}
void point::move(double x, double y)
{
	this->x = x;
	this->y = y;
}
void point::move(point other)
{
	x = other.x;
	y = other.y;
}
double point::distance(point other)
{
	return cbrt(pow(x - other.x, 2) + pow(y - other.y,2));
}
