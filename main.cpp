#include <iostream>

#include "List.h"
#include "List.inl"

int menuMain() {
	int choice;
	system("cls");
	std::cout << "1. Linked list" << std::endl;
	std::cout << "2. Double linked ist" << std::endl;
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
	std::cout << "3. Add an element after the specified one" << std::endl;
	std::cout << "4. Output list" << std::endl;
	std::cout << "5. Deleting an alement after the specified one" << std::endl;
	std::cout << "6. Deleting the list" << std::endl;
	std::cout << "7. Return back" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> choice;
	return choice;
}



int main()
{
	/*int choice = menuList();
	List<int> action;
	switch (choice) {
	case 1:
		std::cout << "Add" << std::endl;
		action.addBegin(5);
		break;
	}*/

	int choiceMain = menuMain();
	int choiceList = menuList();
	List<int> action;
	List<int> number;

	switch (choiceMain) {
	case 1:
		menuList();
		switch (choiceList) {
		case 1:
			std::cout << "Enter data";
			//std::istream number; реализовать ввод данных
			action.addBegin(5);
			break;
		}
		break;
	case 0:
		exit(EXIT_SUCCESS);
	default:
		std::cerr << "Incorrect choice" << std::endl;
		exit(EXIT_SUCCESS);
	}
	return 0;
}