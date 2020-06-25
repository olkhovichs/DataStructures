#include "Menu.h"
#include "List.h"

#include <iostream>
#include <fstream>

int main()
{
	int choiceMain = menuMain();
	int choiceList = menuList();

	int dataSome = 3;

	List<int> action;

	std::ofstream outFile;
	outFile.open("out.txt");

	switch (choiceMain) {
	case 1: 
		switch (choiceList) {
			menuList();
		case 1: 
			system("cls");
			action.addBegin(dataSome);
			menuList();
		case 2:
			system("cls");
			action.addEnd(dataSome);
			menuList();
		/*case 3:
			system("cls");
			action.insert()
			break;*/
		case 4:
			system("cls");
			action.printList();
			break;
		case 0: 
			exit(EXIT_SUCCESS);
		default:
			std::cerr << "Incorrect choice" << std::endl;
			exit(EXIT_SUCCESS);
		}
	case 0: 
		exit(EXIT_SUCCESS);
	default:
		std::cerr << "Incorrect choice" << std::endl;
		exit(EXIT_SUCCESS);
	}
	return 0;
}