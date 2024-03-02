// CarProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"


using namespace std;
int main()
{
jh
	//Static Memory allocation
	Car MyCar(2020, "Toyota");
	cout << "Accelerating Phase : " << endl;
	MyCar.Accelerate();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Accelerate();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Accelerate();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Accelerate();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Accelerate();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;

	cout << "Braking Phase : " << endl;

	MyCar.Brake();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Brake();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Brake();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Brake();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;
	MyCar.Brake();
	cout << "My Current Speed is : " << MyCar.getSpeed() << endl;

	//Dynamic Memory Allocation


	Car* MyCar1 = new Car(2020, "Toyota");
	cout << "Accelerating Phase : " << endl;
	MyCar1->Accelerate();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Accelerate();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Accelerate();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Accelerate();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Accelerate();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;

	cout << "Braking Phase : " << endl;

	MyCar1->Brake();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Brake();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Brake();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Brake();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
	MyCar1->Brake();
	cout << "My Current Speed is : " << MyCar1->getSpeed() << endl;
}

