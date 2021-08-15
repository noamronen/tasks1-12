#pragma once
#include<string.h>
#include <string>
class course
{
private:
	double testGrade;
	double quize1grade;
	double quize2grade;
	std::string course_name;
public:
	course();
	course(double testGrade, double quize1grade, double quize2grade, std::string course_name);
	std::string getCourseName();
	double* getGrades();
	double average();
};
