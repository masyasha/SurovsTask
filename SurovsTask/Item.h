#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item(string ItemName);
	~Item();
	void setParams(int quantity, int price, string value, int articul)
	{
		quan = quantity;
		pr = price;
		val = value;
		art = articul;
	}

	void getParams()
	{
		cout << ItemName << "\n{" << "\nQuantity: " << quan << "\nPrice: " << pr << "\nValue: " << val << "\nArticul: " << art << "\n}\n" << endl; 
	}

	void checkVars()
	{
		cout << "1: " << quan << endl;
		cout << "2: " << pr << endl;
		cout << "3: " << val << endl;
		cout << "4: " << art << endl;
	}

private:
	string ItemName;
	int quan;
	int pr;
	string val;
	int art;
};

