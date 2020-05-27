#include "List.h"

template <typename Data>
void List<Data>::addBegin(Data newData) {
	element* temp = new element;
	temp->data = newData;
	temp->next = begin;
	begin = temp;
}

template <typename Data>
void List<Data>::insert(element* current, Data* newData) {
	element* temp = new element;
	temp->data = newData;
	temp->next = current->next;
	current->next = temp;
}

template <typename Data>
void List<Data>::addEnd(Data* newData) {
	element* temp = new element;
	element* current = new element;
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
void List<Data>::printList(element* current) {
	if (!current) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (current) {
			std::cout << current->data << " ";
			current = current->next;
		}
	}
}

template <typename Data>
void List<Data>::deleteNode(element* current) {
	element* temp = current->next;
	current->next = temp->next;
	free(temp);
}

template <typename Data>
void List<Data>::deleteList(element* begin) {
	element* temp;
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