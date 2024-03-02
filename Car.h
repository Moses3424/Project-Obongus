#pragma once
#include <string>
using namespace std;
class Car
{
private:
	int m_yearModel;
	string m_make;
	int m_speed;
public:
	//Default constructor
	Car();
	//Overloaded constructor
	Car(int yearModel, string make);
	//Getters
	int getYearModel() { return m_yearModel; };
	string getMake() { return m_make; };
	int getSpeed() { return m_speed; };

	//Setters
	void setYearModel(int y) { m_yearModel = y; };
	void setMake(string m) { m_make = m; };
	void setSpeed(int s) { m_speed = s; };

	//Custom Functions

	void Accelerate();
	void Brake();
};

