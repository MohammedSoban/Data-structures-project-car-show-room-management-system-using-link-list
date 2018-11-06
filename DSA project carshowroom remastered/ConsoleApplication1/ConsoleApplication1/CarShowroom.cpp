#include<iostream>
#include"string"
#include"CarShowroom.h"
#include<cstring>
#include<stdlib.h>

using namespace std;

CarShowroom::CarShowroom()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}



void CarShowroom::AddCar()
{
	nodePtr p = new node;
	p->next = NULL;



	system("cls");


		cout << "Enter 4 digit ID N.O of car \n";
		cin >> p->_CarID;
//		getchar();

	cout << "Enter the Registraiong number of car:" << endl;
	getline(cin, p->_RegistrationNumber);


	cout << "Enter the name of the car: " << endl;
	getline(cin, p->_NameOfCar);


	cout << "Enter the Manufacturing company: " << endl;
	getline(cin, p->_Make);


	cout << "Enter the model of the car: " << endl;
	getline(cin, p->_Model);


	cout << "Enter the Cubic Centimeter(CC) of car: " << endl;
	getline(cin, p->_CubicCentimeter);


	cout << "Enter the colour of the car:" << endl;
	getline(cin, p->_Colour);


	cout << "Enter the type of the car:" << endl;
	getline(cin, p->_Type);


	cout << "Enter the Name of the owner:" << endl;
	getline(cin, p->_NameOfowner);

	cout << "Enter the price of the car:" << endl;
	getline(cin, p->_price);

	cout << "Car is new or old:" << endl;
	getline(cin, p->_NewOrOld);

	if (head != NULL)
	{
		current = head;
		while (current->next!=NULL)
		{
			current = current->next;
		}
		current->next = p;
	}
	else
	{
		head = p;
	}

	cout << "Record Successfully Enterd........." << endl;

}

void CarShowroom::ModifyCar()
{
	system("cls");


	nodePtr ptr;


	int CarID;


		cout << "Enter 4 digit ID N.O of car\n";
		cin >> CarID;
//		getchar();


	temp = head;
	current = head;

	if (head == NULL)
	{
		cout << "there is no data with this I.D:" << endl;
		return;

	}

	while (current->_CarID != CarID)
	{
		temp = current;
		current = current->next;

	}

	cout << "Enter the Registraiong number of car:" << endl;
	getline(cin, current->_RegistrationNumber);


	cout << "Enter name of the car: " << endl;
	getline(cin, current->_NameOfCar);


	cout << "Enter the Manufacturing company: " << endl;
	getline(cin, current->_Make);


	cout << "Enter the model of the car: " << endl;
	getline(cin, current->_Model);


	cout << "Enter the Cubic Centimeter(CC) of car: " << endl;
	getline(cin, current->_CubicCentimeter);


	cout << "Enter the colour of the car:" << endl;
	getline(cin, current->_Colour);


	cout << "Enter the type of the car:" << endl;
	getline(cin, current->_Type);


	cout << "Enter the Name of the owner:" << endl;
	getline(cin, current->_NameOfowner);


	cout << "Enter the price of the car:" << endl;
	getline(cin, current->_price);

	cout << "Car is new or old:" << endl;
	getline(cin, current->_NewOrOld);


	cout << "Record successfully Modified....." << endl;



}
void CarShowroom::Display()
{
	system("cls");
	node *prev = NULL;
	node *current = NULL;
	int CarID;

	prev = head;
	current = head;
	if (head==NULL)
	{
		cout << "there is no data to be Displayed"<< endl;
		return;

	}

	while (current != NULL)
	{
		cout << "Car ID N.O :" << current->_CarID << endl;
		cout << "Registration N.O: " << current->_RegistrationNumber << endl;
		cout << "Name of the car: " << current->_NameOfCar << endl;
		cout << "Manufactured by: " << current->_Make << endl;
		cout << "Model: " << current->_Model << endl;
		cout << "Cubic Centimeter(CC): " << current->_CubicCentimeter << endl;
		cout << "Colour: " << current->_Colour << endl;
		cout << "Type: " << current->_Type << endl;
		cout << "Name of the owner: " << current->_NameOfowner << endl;
		cout << "Price: " << current->_price << endl;
		cout << "New or Old:" << current->_NewOrOld << endl;
		current = current->next;
		cout << endl;
	}
}
void CarShowroom::DelCar()
{
	system("cls");

	nodePtr delPtr = NULL;
	temp = head;
	current = head;

	int CarID;

	cout << "Enter 4 digit ID N.O of car" << endl;
	cin >> CarID;
	if (head == NULL)
	{
		cout << "there is no data to be Deleted" << endl;
		return;

	}


	while (current->_CarID != CarID)
	{
		temp = current;
		current = current->next;
	}
	temp->next = current->next;
	current->next = NULL;
	delete current;

	cout << "data successfully deleted............" << endl;


}
