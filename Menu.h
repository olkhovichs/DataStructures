#pragma once

#include <iostream>
#include <iomanip>

class Menu {
public:
	int choiceMain;
	int choiceList;
	int choiceDoubleList;
	int choiceStack;

	int menuMain();
	int menuList();
	int menuDoubleList();
	int menuStack();
};