#pragma once

template <class Data> class Stack {
private:
	struct Cell {
		Data data;
		Cell* next;
	};

	Cell* top = nullptr;

public:
	void pushCell(Data newData);
	void popCell();
	void printStack();
	void deleteStack();
};

template <typename Data> void Stack<Data>::pushCell(Data newData) {
	Cell* temp = new Cell;
	temp->data = newData;
	if (top == nullptr) {
		top = temp;
	}
	else {
		temp->next = top;
		top = temp;
	}
	std::cout << "Successfull" << std::endl;
}

template <typename Data> void Stack<Data>::popCell() {
	Cell* temp = new Cell;
	if (top != nullptr) {
		temp = top;
		top = top->next;
		free(temp);
		std::cout << "Successfull" << std::endl;
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}
}

template <typename Data> void Stack<Data>::printStack() {
	Cell* temp = new Cell;
	temp = top;
	if (top != nullptr) {
		while (temp) {
			std::cout << std::setw(2) << temp->data; // error
			temp = temp->next;
		}
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}
}

template <typename Data> void Stack<Data>::deleteStack() {
	if (top != nullptr) {
		while (top) {
			Cell* temp = top;
			top = top->next; // error
			free(temp);
		}
		std::cout << "Successfull" << std::endl;
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}
}
