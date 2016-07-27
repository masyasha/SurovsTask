#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item(string ItemName);
	~Item();
	int setParams(int quantity, int price, string value, int articul)
	{
		quantity = quantity;
		price = price;
		articul = articul;

		return 0;
	}

private:
	string ItemName;
	int quantity;
	int price;
	string value;
	int articul;
};

