#pragma once
#include"course.hpp"
using namespace std;
class student
{
private:
	string name;
	int numOfCourses;
	course*courses[10];
	int randomBonus;
	int magicBonus;
public:
	student();
	student(string name, int numOfCourses, course* courses[10]);
	string getName();
	double average();
	

};
