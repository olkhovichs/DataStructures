#pragma once

#include <iostream>


template <typename Data>
class List {
public:
	struct Node {
		Data data;
		Node* next;
	};

	Node* begin = nullptr;

	void addBegin(Data newData);
	void insert(Node* current, Data* newData);
	void addEnd(Data* newData);
	void printList();
	void deleteNode(Node* current);
	void deleteList(Node* begin);
};