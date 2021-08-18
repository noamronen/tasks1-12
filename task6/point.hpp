#pragma once
class point
{
private:
	double x;
	double y;
public:
	point();
	point(double x, double y);
	double getX();
	double getY();
	void move(double x, double y);
	void move(point other);
	double distance(point other);
};
