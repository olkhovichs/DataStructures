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
	std::cout << "Successfull" << std::endl;
}

template <typename Data> void Queue<Data>::popElement() {
	Element* temp = new Element;
	if (head != nullptr) {
		temp = head;
		head = head->next;
		free(temp);
		std::cout << "Successfull" << std::endl;
	}
	else {
		std::cout << "Queue is empty" << std::endl;
	}
}

template <typename Data> void Queue<Data>::printQueue() {
	Element* temp = new Element;
	temp = head;
	if (head != nullptr) {
		while (temp) {
			std::cout << std::setw(2) << temp->data;
			temp = temp->next;
		}
	}
	else {
		std::cout << "Queue is empty" << std::endl;
	}
}

template <typename Data> void Queue<Data>::deleteQueue() {
	if (head != nullptr) {
		while (head) {
			Element* temp = head;
			head = head->next;
			free(temp);
		}
		std::cout << "Successfull" << std::endl;
	}
	else {
		std::cout << "Queue is empty" << std::endl;
	}
}
