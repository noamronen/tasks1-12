#pragma once
#include"student.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
student::student()
{

}

student::student(string name, int numOfCourses, course* courses[10])
{
	srand((unsigned)time(0));
	this->randomBonus = (rand() % 10) + 1;
	this->name = name;
	this->numOfCourses = numOfCourses;
	this->courses[10] = courses[10];
}
string student::getName()
{
	return name;
}

double student::average()
{
	double sum=0;
	for (int i = 0;i < numOfCourses;i++)
		sum += courses[i]->average();
	int magicBonus=0;
	for (int i = 0;numOfCourses < 10;i++)
	{
		if (courses[i]->getCourseName().back() == 'y')
			magicBonus += 1;
		if (courses[i]->getCourseName().front() == 'e')
			magicBonus += 2;
		if (courses[i]->getCourseName().back() == 'h')
			magicBonus += 5;
	}
	this->magicBonus = magicBonus;
	return ((sum + magicBonus + randomBonus) / numOfCourses);


}
