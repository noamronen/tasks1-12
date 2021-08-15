#pragma once
#include"course.hpp"
#include"student.hpp"
#include <vector>
#include<iostream>
using namespace std;
int main()
{
	vector<student> students;
	int option = 0;
	int numOfStudents = 0;
	
	string name;
	int numOfCourses;
	course courses[10];
	
	double testGrade;
	double quize1grade;
	double quize2grade;
	string course_name;

	while (true)
	{
		cout << "welcome: " << endl;
		cout << "1. add a new student to school" << endl;
		cout << "2. colculate average grade of all students" << endl;
		cout << "3. show all students descending by their averages" << endl;
		cout << "4. exit" << endl;
		
		cin >> option;
		if (option == 1)
		{
			student newStudent;
			cout << "enter the students name: " << endl;
			cin >> name;
			cout << "enter num of courses: " << endl;
			cin >> numOfCourses;
			for (int i = 0;i < numOfCourses;i++)
			{
				cout << "enter test grade: " << endl;
				cin >> testGrade;
				cout << "enter quize 1 grade: " << endl;
				cin >> quize1grade;
				cout << "enter quiz 2 grade: " << endl;
				cin >> quize2grade;
				cout << "enter course name: " << endl;
				cin >> course_name;

				course newCourse = course(testGrade, quize1grade, quize2grade, course_name);
				courses[i] = newCourse;
			}
			course* ptr = courses;
			newStudent = student(name, numOfCourses, &ptr);
			students.push_back(newStudent);
			numOfStudents++;
			cout << "student: " << newStudent.getName() << " courses: ";
			for (int i = 0;i < numOfCourses;i++)
			{
				cout << courses[i].getCourseName() << " ";
			}
			cout << endl;
			cout << endl;

		}
		if (option == 2)
		{
			double average=0;
			for (student i:students)
			{
				average += i.average();
			}
			average = average / numOfStudents;
			cout << "students average: " << average<<endl;

		}
		if (option == 3)
		{
			vector<student> temp=students;
			double biggest = 0;
			int indx=-1;
			for (int i = 0;i < numOfStudents;i++)
			{
				for (int j=0;j<temp.size();j++)
				{
					if (temp.at(j).average() > biggest)
					{
						biggest = temp.at(j).average();
						indx = j;
					}
				}
				cout << temp.at(indx).getName()<<" "<< temp.at(indx).average()<<endl;
				delete(&temp.at(indx));
				
			}
		
		}
		if (option == 4)
			break;

	}
	return 0;

}
