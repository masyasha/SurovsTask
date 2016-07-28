// SurovsTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Item.h"
using namespace std;

int main()
{
	Item Masik("Dog");
	Item Brother("Parents");
	Masik.setParams(1, 1000, "rubles", 127276);
	Masik.getParams();
	Brother.setParams(2, 1, "infinity", 108108);
	Brother.getParams();

	system("pause");
    return 0;
}

