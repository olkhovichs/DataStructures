#pragma once

template <class Data> class BinTree {
private:
	struct Node {
		Data key;
		Node* left;
		Node* right;
	};
	Node* Tree = nullptr;

public:
	void newNode(Data x); // разобраться с типами методов
	void addNode(Data newData);
};

template <typename Data> void BinTree<Data>::newNode(Data newData) {
	Node* temp = new Node;
	temp->key = newData;
	temp->left = temp->right = nullptr;
}

/*template <typename Data> void BinTree<Data>::addNode(Data newData) {
	if (Tree == nullptr) {
		newNode(newData);
	}
	if (newData < Tree->key) {
		Tree->left = 
	}
}*/