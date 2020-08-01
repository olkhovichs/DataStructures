#pragma once

#include <iostream>
#include <iomanip>

class Menu {
public:
	int choiceMain;
	int choiceList;
	int choiceDoubleList;
	int choiceStack;
	int choiceQueue;
	int choiceTree;

	int menuMain();
	int menuList();
	int menuDoubleList();
	int menuStack();
	int menuQueue();
	int menuTree();
};