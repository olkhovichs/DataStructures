#include "List.h"

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
void List<Data>::addEnd(Data* newData) {
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

/*template <typename Data>
void List<Data>::printList() {
	if (!current) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (current) {
			std::cout << current->data << " ";
			current = current->next;
		}
	}
}*/

template <typename Data>
void List<Data>::deleteNode(Node* current) {
	Node* temp = current->next;
	current->next = temp->next;
	free(temp);
}

template <typename Data>
void List<Data>::deleteList(Node* begin) {
	Node* temp = new Node;
	if (!begin) {
		std::cout << "The list if empty" << std::endl;
	}
	else {
		while (begin) {
			temp = begin;
			begin = begin->next;
			free(temp);
		}
	}
}