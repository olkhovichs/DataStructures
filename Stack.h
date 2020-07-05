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
	void deleteStack();
	void printStack();
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
	Cell* prev = new Cell;
	if (top != nullptr) {
		free(top);
		std::cout << "Successfull" << std::endl;
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}
}