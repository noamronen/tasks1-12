#pragma once
#include"course.hpp"
course::course()
{

}
course::course(double testGrade, double quize1grade, double quize2grade, std::string course_name)
{
	this->testGrade = testGrade;
	this->quize1grade = quize1grade;
	this->quize2grade = quize2grade;
	this->course_name = course_name;
}

std::string course::getCourseName()
{
	return course_name;
}

double* course::getGrades()
{
	double grades_arr[3] = { testGrade,quize1grade,quize2grade };
	double* pointer = grades_arr;
	return pointer;
}

double course::average()
{
	double average = ((0.5 * testGrade + 0.25 * quize1grade + 0.25 * quize2grade) / 2);
	return average;
}
