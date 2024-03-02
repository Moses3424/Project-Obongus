#include "Car.h"
//Default constructor
Car::Car() {

	m_yearModel = 0;
	m_make = "";
	m_speed = 0;

}
//Overloaded constructor
Car::Car(int yearModel, string make) {

	m_yearModel = yearModel;
	m_make = make;
	m_speed = 0;
}
//Custom Functions
void Car::Accelerate() {

	m_speed += 5;
}
void Car::Brake() {

	m_speed -= 5;
}