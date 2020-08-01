#include "Menu.h"
#include "linkedList.h"
#include "DoubleLinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BinTree.h"

#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	Menu* choice = new Menu;
	List<int> actionList;
	DoubleLinkedList<int> actionDoubleList;
	Stack<int> actionStack;
	Queue<int> actionQueue;
	BinTree<int> actionTree;

	int dataSome;

	std::ifstream inFile;
	std::ofstream outFile;
	inFile.open("input.txt");
	outFile.open("out.txt");

	switch (choice->menuMain()) {
	case 1: 
		switch (choice->menuList()) {
			choice->menuList();
		case 1: 
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionList.addBegin(dataSome);
			Sleep(1500);
			choice->menuList();
		case 2:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionList.addEnd(dataSome);
			Sleep(1500);
			choice->menuList();
		case 3:
			system("cls");
			actionList.printList();
			Sleep(5000);
			choice->menuList();
		case 4:
			system("cls");
			actionList.deleteList();
			Sleep(1000);
			choice->menuList();
		case 5:
			choice->menuMain();
		case 0: 
			exit(EXIT_SUCCESS);
		default:
			std::cerr << "Incorrect choice" << std::endl;
			exit(EXIT_SUCCESS);
		}
	case 2:
		switch (choice->menuDoubleList()) {
			choice->menuDoubleList();
		case 1:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionDoubleList.addBegin(dataSome);
			Sleep(1500);
			choice->menuDoubleList();
		case 2:
			system("cls");
			std::cout << "Enter Data: ";
			std::cin >> dataSome;
			actionDoubleList.addEnd(dataSome);
			Sleep(1500);
			choice->menuDoubleList();
		case 3:
			system("cls");
			actionDoubleList.printDoubleList();
			Sleep(5000);
			choice->menuDoubleList();
		case 4:
			system("cls");
			actionDoubleList.deleteDoubleList();
			Sleep(1500);
			choice->menuDoubleList();
		case 5:
			choice->menuMain();
		case 0:
			exit(EXIT_SUCCESS);
		default:
			std::cerr << "Incorrect choice" << std::endl;
			exit(EXIT_SUCCESS);
		}
	case 3:
		switch (choice->menuStack()) {
			choice->menuStack();
		case 1:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionStack.pushCell(dataSome);
			Sleep(1500);
			choice->menuStack();
		case 2:
			system("cls");
			actionStack.popCell();
			Sleep(1500);
			choice->menuStack();
		case 3:
			system("cls");
			actionStack.printStack();
			Sleep(5000);
			choice->menuStack();
		case 4:
			system("cls");
			actionStack.deleteStack();
			Sleep(1500);
			choice->menuStack();
		case 5:
			choice->menuMain();
		case 0:
			exit(EXIT_SUCCESS);
		default:
			std::cerr << "Incorrect choice" << std::endl;
			exit(EXIT_SUCCESS);
		}
	case 4:
		switch (choice->menuQueue()) {
			choice->menuQueue();
		case 1:
			system("cls");
			std::cout << "Enter data: ";
			std::cin >> dataSome;
			actionQueue.pushElement(dataSome);
			Sleep(1500);
			choice->menuQueue();
		case 2:
			system("cls");
			actionQueue.popElement();
			Sleep(1500);
			choice->menuQueue();
		case 3:
			system("cls");
			actionQueue.printQueue();
			Sleep(5000);
			choice->menuQueue();
		case 4:
			system("cls");
			actionQueue.deleteQueue();
			Sleep(1500);
			choice->menuQueue();
		case 5:
			choice->menuMain();
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
	delete choice;
	return 0;
}