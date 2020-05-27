#include <iostream>

#include "List.h"

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
	std::cout << "8. Exit" << std::endl;
	std::cin >> choice;
	return choice;
}

int main()
{
	int choice = menuList();
	List<int> action;
	switch (choice) {
	case 1:
		std::cout << "Add" << std::endl;
		action.addBegin(4);
		break;
	}
	return 0;
}