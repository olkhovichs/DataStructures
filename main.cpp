#include "Menu.h"
#include "linkedList.h"
#include "DoubleLinkedList.h"

#include <iostream>
#include <fstream>
#include <windows.h>

int main()
{
	int choiceMain = menuMain();
	int choiceList = menuList();

	int dataSome;

	List<int> actionList;

	std::ifstream inFile;
	std::ofstream outFile;
	inFile.open("input.txt");
	outFile.open("out.txt");

	switch (choiceMain) {
	case 1: 
		switch (choiceList) {
			menuList();
		case 1: 
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionList.addBegin(dataSome);
			Sleep(1500);
			menuList();
		case 2:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionList.addEnd(dataSome);
			Sleep(1500);
			menuList();
		case 3:
			system("cls");
			actionList.printList();
			Sleep(5000);
			menuList();
		case 4:
			system("cls");
			actionList.deleteList();
			Sleep(1000);
			menuList();
		case 5:
			menuMain();
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