#pragma once
#include"point.hpp"
#include"shape.hpp"
#include<vector>
using namespace std;
class polygon : public shape
{
private:
	vector<point> points;
public:
	virtual int num_of_points()=0;
	virtual vector<double> getSides()=0;
	virtual vector<point> getPoints()=0;
	virtual double perimeter()=0;
	virtual double area()=0;


};
