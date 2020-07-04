#pragma once

#include <iostream>
#include <iomanip>

class Menu {
public:
	int choiceMain;
	int choiceList;
	int choiceDoubleList;

	int menuMain();
	int menuList();
	int menuDoubleList();
};