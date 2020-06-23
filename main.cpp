#include "Menu.h"
#include "List.h"
#include "List.inl"

#include <iostream>
#include <fstream>

int main()
{
	int choiceMain = menuMain();
	int choiceList = menuList();

	int dataSome;

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
			break;
		case 2:
			system("cls");
			action.addEnd(dataSome);
			break;
		case 3:
			system("cls");
			action.insert()
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