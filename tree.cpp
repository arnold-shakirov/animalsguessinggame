#include "tree.h"
#include <string>
#include <algorithm>
tree::tree(string _data) {
	data = _data;
	left = nullptr;
	right = nullptr;
	question = 0;
}

int tree::isquestion() {
	return question == 1;
}

int tree::hasChildren() {
	if ((left != nullptr) || (right != nullptr)) {
		return 1;
	}
	else {
		return 0;
	}
}

void tree::setquestion(int value) {
	question = value;
}

void tree::setLeft(tree* _left) {
	left = _left;
}

void tree::setRight(tree* _right) {
	right = _right;
}

tree* tree::getLeft() {
	return left;
}

tree* tree::getRight() {
	return right;
}

string tree::getData() {
	return data;
}

void tree::setData(string newData) {
	data = newData;
}

int tree::size() {
if (left && right) {
	return 1 + left -> size() + right -> size();
}
else if(left) {
	return 1 + left ->size();
}
else if(right) {
	return 1 + right -> size();
}
else {
	return 1;
}
}

int tree::depth() {
if (left&&right) {
	return 1 + std::max(left->depth(),right->depth());
}
else if(left) {
	return 1 + left->depth();
}
else if(right) {
	return 1 + right->depth();
}
else {
	return 1;
}
}
