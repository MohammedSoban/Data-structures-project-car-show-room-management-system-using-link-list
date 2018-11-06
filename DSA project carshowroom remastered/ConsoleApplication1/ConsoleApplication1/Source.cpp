#include<iostream>
#include"string"
#include"CarShowroom.h"
#include<cstring>

using namespace std;
 
int main()
{
	
	
	int choice;
	CarShowroom cs;
	do
	{ 

	
	cout << endl;
	
	cout << "1=Add Car Data" << endl;
	cout << "2=Delete Car Data" << endl;
	cout << "3=Display Car Data" << endl;
	cout << "4=Modify Car Data" << endl;
	cout << "5=EXIT" << endl;


	
	
	cout << endl;
	cout << "Enter your choice" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cs.AddCar();
		    break;

	case 2:
		cs.DelCar();
			break;
			
	case 3:
		cs.Display();
		break;

	case 4:
		cs.ModifyCar();
		break;

	case 5:
		cout << "GOOD BYE :)" << endl;
		break;

	default:
		cout << "wrong entry try again!" << endl;
	}
	
	
	
	} while (choice!=5);

	

	return 0;
	
}