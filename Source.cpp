/*
Program name: Triangles
Author: Brice Bayless
Date last Updated: 10/5/2018
Purpose: Receive 3 lengths and determin if they qualify as a traingle and if so is it a right triangle.
*/



#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double sideA;
	double sideB;
	double sideC;
	bool isTriangle(double sideA, double sideB, double sideC);
	bool isRightTriangle(double sideA, double sideB, double sideC);

	//cout what is the length of the first side
	cout << "Inpute the length of the first side: " << endl;
	//cin first side
	cin >> sideA;
	//cout what is the length of the second side
	cout << "Inpute the length of the second side: " << endl;
	//cin second side
	cin >> sideB;
	//cout what is the length of the third side
	cout << "Inpute the length of the third side: " << endl;
	//cin third side
	cin >> sideC;


	if (isTriangle(sideA, sideB, sideC)) 
	{
		//if first side squared + second side squared equals third side squared
		if (isRightTriangle(sideA, sideB, sideC)) 
		{
			//cout this is a right triangle
			cout << "This is a right Triangle!" << endl;
		}
		//else
		else
		{
			//cout this is a traingle but not a right triangle
			cout << "This is a triangle, but not a right triangle." << endl;
		}
	}
	//else 
	else
	{
		//cout this is not a triangle
		cout << "This is not a Triangle" << endl;
	}
	return 0;
};

bool isTriangle (double sideA, double sideB, double sideC)
{
	if (((sideA + sideB) > sideC) && ((sideB + sideC) > sideA) && ((sideA + sideC) > sideB))
		return true;
	else
		return false;
}

bool isRightTriangle(double sideA, double sideB, double sideC) {
	if (pow(sideA, 2) + pow(sideB, 2) == (pow(sideC, 2)))
		return true;
	else if (pow(sideB, 2) + pow(sideC, 2) == (pow(sideA, 2)))
		return true;
	else if (pow(sideC, 2) + pow(sideA, 2) == (pow(sideB, 2)))
		return true;
	else
		return false;
}