#pragma once
#include <iostream>
#include <string>

class Actor
{

public:
	double X;
	double Y;
	double Z;
	void transform(double x, double y, double z) {
		std::cout << " Move to " << x << y << z << std::endl;
	}
	Actor() {
		this->X = 0;
		this->Y = 0;
		this->Z = 0;
		processID = 10001;
	}
	~Actor(){

	}
protected:
	int processID;

};

