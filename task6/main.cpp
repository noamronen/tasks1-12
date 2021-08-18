#pragma once;
#include"circle.hpp"
#include"quadrangle.hpp"
#include"triangle.hpp"
#include<iostream>
int main()
{
	int option = -1;
	shape* shapes[5];
	for (int i = 0;i < 1;i++)
	{
		cout << "1. circle" << endl;
		cout << "2. quadrangle" << endl;
		cout << "3. triangle" << endl;
		cin >> option;
		if (option == 1)
		{
			int x, y;
			double radious;
			cout << "enter center point: " << endl;
			cout << "enter x: " << endl;
			cin >> x;
			cout << "enter y: " << endl;
			cin >> y;
			cout << "enter radious: " << endl;
			cin >>radious;
			circle* newCircle = new circle(point(x, y), radious);
			shapes[i] = newCircle;

		}
		if (option == 2)
		{
			point p1, p2, p3, p4;
			int x, y;
			cout << "enter p1: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p1 = point(x, y);

			cout << "enter p2: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p2 = point(x, y);

			cout << "enter p3: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p3 = point(x, y);

			cout << "enter p4: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p4 = point(x, y);

			quadrangle* newquad = new quadrangle(p1, p2, p3, p4);
			shapes[i] = newquad;
		}
		if (option == 3)
		{
			point p1, p2, p3;
			int x, y;
			cout << "enter p1: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p1 = point(x, y);

			cout << "enter p2: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p2 = point(x, y);

			cout << "enter p3: " << endl;
			cout << "x: " << endl;
			cin >> x;
			cout << "y: " << endl;
			cin >> y;
			p3 = point(x, y);

			triangle* newtri = new triangle(p1, p2, p3);
			shapes[i] = newtri;
		}
	}
	for (int i = 0;i < 5;i++)
	{
		cout << "shape " << i + 1 << " area : " << shapes[i]->area();
		cout << "shape " << i + 1 << " perimeter : " << shapes[i]->perimeter();
	}
	return 0;
}
