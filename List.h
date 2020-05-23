#pragma once

#include <iostream>

template <typename Data>
class List {
private:
	struct element {
		Data data;
		element* next;
	};

	element* begin = nullptr;

public:

	void addBegin(Data* newData);
	void insert(element* current, Data* newData);
	void addEnd(Data* newData);
	void printList(element* current);
	void deleteNode(element* current);
	void deleteList(element* begin);
};