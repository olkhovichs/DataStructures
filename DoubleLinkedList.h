#pragma once

#include <iostream>

template <class Data> class DoubleLinkedList {
private:
	struct Node {
		Data data;
		Node* prev;
		Node* next;
	};
	Node* begin = nullptr;
	Node* end = nullptr;

public:
	void addBegin(Data newData);
};

template <typename Data> void DoubleLinkedList<Data>::addBegin(Data newData) {
	Node* temp = new Node;
	temp->data = new data;
	temp->prev = nullptr;
	temp->next = begin;
	if (begin != nullptr) {
		begin->prev = temp;
	}
	else {
		end = temp;
	}
	begin = temp;
}
