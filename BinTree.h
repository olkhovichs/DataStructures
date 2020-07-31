#pragma once

template <class Data> class BinTree {
private:
	struct Node {
		Data key;
		Node* left;
		Node* right;
	};

public:
	bool checkEmpty(Node* tree);
	void addNode(Data newData, Node* tree);
	void pre_printTree(Node* tree);
	void in_printTree(Node* tree);
	void post_printTree(Node* tree);

};

template <typename Data> bool BinTree<Data>::checkEmpty(Node* tree) {
	if (tree == nullptr) {
		std::cout << "The tree is empty" << std::endl;
		return true;
	}
	else {
		return false;
	}
}

template <typename Data> void BinTree<Data>::addNode(Data newData, Node* tree) {
	if (checkEmpty(tree)) {
		tree = new Node;
		tree->key = newData;
		tree->left = tree->right = nullptr;
	}
	else if (newData < tree->left) {
		tree->left = addNode(newData, tree->left);
	}
	else {
		tree->right = addNode(newData, tree->right);
	}
	std::cout << "Successfull" << std::endl;
}

template <typename Data> void BinTree<Data>::pre_printTree(Node* tree) {
	if (!checkEmpty(tree)) {
		std::cout << tree->key;
		pre_printTree(tree->left);
		pre_printTree(tree->right);
	}
	else {
		checkEmpty(tree);
	}
}

template <typename Data> void BinTree<Data>::in_printTree(Node* Tree) {
	if (!checkEmpty(tree)) {
		in_printTree(tree->left);
		std::cout << tree->key;
		in_printTree(tree->right);
	}
	else {
		checkEmpty(tree);
	}
}

template <typename Data> void BinTree<Data>::post_printTree(Node* tree) {
	if (!checkEmpty(tree)) {
		post_printTree(tree->left);
		post_printTree(tree - right);
		std::cout << tree->key;
	}
	else {
		checkEmpty(tree);
	}
}