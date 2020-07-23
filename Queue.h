#pragma once

template <class Data> class Queue {
private:
	struct Element {
		Data data;
		Element* next;
	};
	Element* head = nullptr;
	Element* tail = nullptr;

public:
	void pushElement(Data newData);
	void popElement();
	void printQueue();
	void deleteQueue();
};

template <typename Data> void Queue<Data>::pushElement(Data newData) {
	Element* temp = new Element;
	if (temp != nullptr) {
		temp->data = newData;
		temp->next = nullptr;
	}
	if (head == nullptr) {
		head = tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
	}
}
