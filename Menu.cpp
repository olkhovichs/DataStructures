#include "Menu.h"

int menuMain() {
	int choice;
	system("cls");
	std::cout << "1. Linked list" << std::endl;
	std::cout << "2. Double linked list" << std::endl;
	std::cout << "3. Stack" << std::endl;
	std::cout << "4. Queues" << std::endl;
	std::cout << "5. Tree" << std::endl;
	std::cout << "6. Binary heap" << std::endl;
	std::cout << "7. Graphs" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choice;
	return choice;
}

int menuList() {
	int choice;
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
	std::cin >> choice;
	return choice;
}

int menuDoubleList() {
	int choice;
	system("cls");
	std::cout << "Choice action: " << std::endl;
	std::cout << "1. Add an element to the beginning" << std::endl;
	std::cout << "2. Add an element to the end" << std::endl;
	std::cout << "3. Output list" << std::endl;
	std::cout << "4. Delete list" << std::endl;
	std::cout << "5. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choice;
	return choice;
}