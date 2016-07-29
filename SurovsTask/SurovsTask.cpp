// SurovsTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Item.h"
using namespace std;

void objCreating()
{
	string itmName;
	int quan;
	int price;
	string value;
	int articul;

	cout << "Welcome to the Easy Items Stock Taking!" << endl;
	cout << "Name: ";
	cin >> itmName;
	cout << "Quantity: ";
	cin >> quan;
	cout << "Price: ";
	cin >> price;
	cout << "Value: ";
	cin >> value;
	cout << "Articul: ";
	cin >> articul;


	Item Item(itmName);
	Item.setParams(quan, price , value, articul);
	Item.getParams();

}

int main()
{
	string cont;

	objCreating();
	while (true)
	{
		cout << "*****************************************\nDo you want to add a new Item? Y/N: ";
		cin >> cont;
		if (cont == "Y" || cont == "y") objCreating();
		else if (cont == "N" || cont == "n") break;
		else break;
	}

	system("pause");
    return 0;
}

