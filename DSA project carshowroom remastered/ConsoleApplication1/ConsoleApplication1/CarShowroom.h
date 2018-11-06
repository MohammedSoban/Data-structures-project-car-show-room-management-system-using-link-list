#include<iostream>
#include"string"
#include<cstring>

using namespace std;

class CarShowroom
{
private:
	typedef struct node
	{
		int _CarID;
		string _RegistrationNumber;
		string _NameOfCar;
		string _Make;
		string _Model;
		string _CubicCentimeter;
		string _Colour;
		string _Type;
		string _NameOfowner;
		string _price;
		string _NewOrOld;
		node *next;
	}*nodePtr;
	
	nodePtr head;
	nodePtr current;
	nodePtr temp;

public:
	CarShowroom();
	
	void AddCar();
	void DelCar();
	void ModifyCar();
	void Display();
	

};



