// SurovsTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include "Item.h"
using namespace std;

void addItem()
{
	string itmName;
	int quan;
	double price;
	string value;

	cout << "***ADDING A NEW ITEM*** \n" << endl;
	cout << "Name: ";
	cin >> itmName;
	cout << "Quantity: ";
	cin >> quan;
	cout << "Price: ";
	cin >> price;
	cout << "Value: ";
	cin >> value;
	cout << "Successfully added a new Item!" << endl;

	Item newItem(itmName);
	newItem.setParams(quan, price, value);
}

void showItems()
{
	ifstream ItemStockingRD("ItemStocking.txt", ios_base::in);
	string str;
	while (getline(ItemStockingRD, str))
	{
		cout << str << endl;
	}
	ItemStockingRD.close();
}

void menuItems()
{
	int menu;

	cout << "\n---------------------------------------\nMenu:\n    1. View existed Items\n    2. Add a new Item\n    3. Exit" << endl;
	cout << ": ";
	try
	{
		cin >> menu;
		if (!cin) throw 1;
	}
	catch (int x)
	{
		cout << "\nInput Error " << x << ":\nNot an integer!" << "\nApp has to be closed." << endl;
		system("pause");
		exit(true);
	}
	cout << "---------------------------------------\n" << endl;
	try
	{
		if (menu == 1) showItems();
		else if (menu == 2) addItem();
		else if (menu == 3) exit(true);
		else throw 2;
	}
	catch (int y)
	{
		cout << "Input Error " << y << ":\nNot a stated variant!" << endl;
	}
}

int main()
{
	string cont;

	cout << "Welcome to the Easy Items Stock Taking!" << endl;
	menuItems();

	while (true)
	{
		menuItems();
	}

	system("pause");
    return 0;
}

