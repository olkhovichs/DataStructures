#include "Menu.h"

int Menu::menuMain() {
	choiceMain = 0;
	system("cls");
	std::cout << "1. Linked list" << std::endl;
	std::cout << "2. Double linked list" << std::endl;
	std::cout << "3. Stack" << std::endl;
	std::cout << "4. Queues" << std::endl;
	std::cout << "5. Tree" << std::endl;
	std::cout << "6. Binary heap" << std::endl;
	std::cout << "7. Graphs" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choiceMain;
	return choiceMain;
}

int Menu::menuList() {
	choiceList = 0;
	system("cls");
	std::cout << "Choice action: " << std::endl;
	std::cout << "1. Add an element to the beginning" << std::endl;
	std::cout << "2. Add an element to the end" << std::endl;
	//std::cout << "3. Add an element after the specified one" << std::endl;
	std::cout << "3. Output list" << std::endl;
	//std::cout << "5. Deleting an alement after the specified one" << std::endl;
	std::cout << "4. Delete list" << std::endl;
	std::cout << "5. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choiceList;
	return choiceList;
}

int Menu::menuDoubleList() {
	choiceDoubleList = 0;
	system("cls");
	std::cout << "Choice action: " << std::endl;
	std::cout << "1. Add an element to the beginning" << std::endl;
	std::cout << "2. Add an element to the end" << std::endl;
	std::cout << "3. Output list" << std::endl;
	std::cout << "4. Delete list" << std::endl;
	std::cout << "5. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choiceDoubleList;
	return choiceDoubleList;
}

int Menu::menuStack() {
	choiceStack = 0;
	system("cls");
	std::cout << "Choice action: " << std::endl;
	std::cout << "1. Add element" << std::endl;
	std::cout << "2. Delete element" << std::endl;
	std::cout << "3. Output stack" << std::endl;
	std::cout << "4. Delete stack" << std::endl;
	std::cout << "5. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choiceStack;
	return choiceStack;
}

int Menu::menuQueue() {
	choiceQueue = 0;
	system("cls");
	std::cout << "Choice action: " << std::endl;
	std::cout << "1. Add element" << std::endl;
	std::cout << "2. Delete element" << std::endl;
	std::cout << "3. Output queue" << std::endl;
	std::cout << "4. Delete queue" << std::endl;
	std::cout << "5. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choiceQueue;
	return choiceQueue;
}