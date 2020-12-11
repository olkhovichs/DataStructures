#pragma once

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
	void addEnd(Data newData);
	void printDoubleList();
	void deleteDoubleList();
};

template <typename Data> void DoubleLinkedList<Data>::addBegin(Data newData) {
	Node* temp = new Node;
	temp->data = newData;
	temp->prev = nullptr;
	temp->next = begin;
	if (begin != nullptr) {
		begin->prev = temp;
	}
	else {
		end = temp;
	}
	begin = temp;
	std::cout << "Successfull" << std::endl;
}

template <typename Data> void DoubleLinkedList<Data>::addEnd(Data newData) {
	Node* temp = new Node;
	temp->next = nullptr;
	temp->data = newData;
	temp->prev = end;
	if (end != nullptr) {
		end->next = temp;
	}
	else {
		begin = temp;
	}
	end = temp;
	std::cout << "Successfull" << std::endl;
}

template <typename Data> void DoubleLinkedList<Data>::printDoubleList() {
	Node* temp = begin;
	if (!temp) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (temp) {
			std::cout << std::setw(2) << temp->data;
			temp = temp->next;
		}
	}
}

template <typename Data> void DoubleLinkedList<Data>::deleteDoubleList() {
	if (!begin) {
		std::cout << "The list is empty" << std::endl;
	}
	else {
		while (begin) {
			Node* temp = new Node;
			temp = begin;
			begin = begin->next;
			free(temp);
		}
	}
	std::cout << "Successfull" << std::endl;
}

