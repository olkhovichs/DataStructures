#include "Menu.h"
#include "linkedList.h"
#include "DoubleLinkedList.h"

#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	int choiceMain = menuMain();
	int choiceList = menuList();
	int choiceDoubleList = menuDoubleList(); // вызвать функцию в switch

	int dataSome;

	List<int> actionList;
	DoubleLinkedList<int> actionDoubleList;

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
	case 2:
		switch (choiceDoubleList) {
			menuDoubleList();
		case 1:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionDoubleList.addBegin(dataSome);
			Sleep(1500);
			menuDoubleList();
		case 2:
			system("cls");
			std::cout << "Enter Data: ";
			std::cin >> dataSome;
			actionDoubleList.addEnd(dataSome);
			Sleep(1500);
			menuDoubleList();
		case 3:
			system("cls");
			actionDoubleList.printDoubleList();
			Sleep(5000);
			menuDoubleList();
		case 4:
			system("cls");
			actionDoubleList.deleteDoubleList();
			Sleep(1500);
			menuDoubleList();
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