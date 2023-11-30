#include "tree.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	string question;
	string answer;
	string animal;
	string ans;
	string answer1;
	tree* initialTree = nullptr;
	tree* root = nullptr;

	cout << "create a question for this animal so the answer for would be true for this animal" << endl;
	cout << "question: ";
	getline(cin, question);
	cout << "what animal? Give me two animals the first one is true and second false";
	cin >> answer;
	cin >> answer1;
	initialTree = new tree(question);
	tree* answerNode = new tree(answer);
	tree* answerNode1 = new tree(answer1);
	initialTree->setLeft(answerNode);
	initialTree->setRight(answerNode1);
	root = initialTree;
	while(true) {
		tree *mytree = root;
		cout << "Now think of a new animal" << endl;
		while (true) {
			if (mytree->hasChildren()== 1) {
				cout <<"My question is: " << mytree->getData() << endl;
				cout << "type yes or no:" << endl;
				cin >> ans;
				cin.ignore();
				if (ans == "yes" && mytree->getLeft() != nullptr) {
					mytree = mytree->getLeft();
				}
				else if (ans == "no" && mytree ->getRight() != nullptr) {
					mytree = mytree->getRight();
				} else {
					cout << "I don't understand the answer." << endl;
				}
			}
			else {
				cout << "Is it" << " " << mytree->getData() << " "  << " type yes or no:";
				cin >> ans;
				cin.ignore();
				if (ans == "yes") {
					cout << "I won";
					break;
				}
				else {
					cout << "what kind of an animal is this?" << endl;
					cin >> animal;
					cin.ignore();
					cout << "make a question so it would be yes for this animal and no for the animal " << mytree->getData() << endl;
					getline(cin, question);
					tree* newanimal = new tree(animal);
					mytree->setLeft(newanimal);
					mytree->setRight(new tree(mytree->getData()));
					mytree->setData(question);
					cout << "thanks for teaching me" << endl;

					mytree = root;
					break;

				}
			}

		}
	}
	delete initialTree;
}
