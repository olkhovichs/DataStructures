#pragma once

#include <iostream>

template <class Data> class List {
public:
	struct Node {
		Data data;
		Node* next;
	};
	Node* begin = nullptr;

	void addBegin(Data newData);
	void insert(Node* current, Data* newData);
	void addEnd(Data newData);
	void printList();
//	void deleteNode(Node* current);
	void deleteList();
};

template <typename Data>
void List<Data>::addBegin(Data newData) {
	Node* temp = new Node;
	temp->data = newData;
	temp->next = begin;
	begin = temp;
}

template <typename Data>
void List<Data>::insert(Node* current, Data* newData) {
	Node* temp = new Node;
	temp->data = newData;
	temp->next = current->next;
	current->next = temp;
}

template <typename Data>
void List<Data>::addEnd(Data newData) {
	Node* temp = new Node;
	Node* current = new Node;
	current = begin;
	temp->data = newData;
	temp->next = nullptr;
	if (current != nullptr) {
		while (current->next) {
			current = current->next;
		}
		current->next = temp;
	}
	else {
		begin = temp;
	}
}

template <typename Data>
void List<Data>::printList() {
	Node* temp = begin;
	if (!temp) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (temp) {
			std::cout << temp->data << " ";
			temp = temp->next;
		}
	}
}

template <typename Data>
void List<Data>::deleteNode(Node* current) {
	Node* temp = current->next;
	current->next = temp->next;
	free(temp);
}

template <typename Data>
void List<Data>::deleteList() {
	if (!begin) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (begin) {
			Node* temp = begin; 
			begin = begin->next;
			free(temp);
		}
	}
}