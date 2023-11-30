#ifndef TREE_H
#define TREE_H
#include <string>
using namespace std;
class tree {
	private:
		string data;
		tree* left;
		tree* right;
		int question;
	public:
		tree(string _data);
		int hasChildren();
		void setLeft(tree* _left);
		void setRight(tree* _right);
		void setquestion(int value);
		int isquestion();
		tree *getLeft();
		tree *getRight();
		string getData();
		void setData(string newData);
		int size();
		int depth();
};
#endif

