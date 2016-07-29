#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item
{
public:
	Item(string ItemName);
	~Item();
	void setParams(int quantity, double price, string value)
	{
		quan = quantity;
		pr = price;
		val = value;

		ofstream ItemStockingWR("ItemStocking.txt", ios_base::app);
		ItemStockingWR << "***" + ItemName + "***" << "\n{" << "\nQuantity: " << quan << "\nPrice: " << pr << "\nValue: " << val << "\n}\n" << endl;
		ItemStockingWR.close();
	}

	void getParams()
	{
		ifstream ItemStockingRD("ItemStocking.txt", ios_base::in);
		string str;
		while (getline(ItemStockingRD, str))
		{
			cout << str << endl;
		}
		ItemStockingRD.close();
	}

private:
	string ItemName;
	int quan;
	double pr;
	string val;
};

