#pragma once

template <class Data> class Stack {
private:
	struct Cell {
		Data data;
		Cell* next;
	};

	Cell* top = nullptr;

	void pushCell(Data newData);
	void popCell(Data newData);
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
}

/*template <typename Data> void Stack<Data>::popCell(Data newData) {
	Cell* temp = new Cell;
	if (top != nullptr) {

	}
}*/