#include <iostream>
#include "Tree.h"

using namespace std;

Tree::Tree():str("hello")
{
	lChild = nullptr;
	rChild = nullptr;
}

Tree::~Tree()
{
}

void Tree::init()
{
}

// 一直往左子树添加
Tree* Tree::create(int n)
{
	Tree* root = (Tree*)malloc(sizeof(Tree));
	root->setStr("root");
	Tree* head = root;

	for (int i = 0; i < n; i++)
	{
		Tree* temp = (Tree*)malloc(sizeof(Tree));
		string str(i + 1, 'h');
		temp->setStr(str);
		temp->lChild = nullptr;
		temp->rChild = nullptr;

		if (head->lChild != nullptr && head->rChild != nullptr)
		{
			head = head->lChild;
		}

		if (head->lChild == nullptr)
		{
			head->lChild = temp;
		}
		else if (head->rChild == nullptr)
		{
			head->rChild = temp;
		}
		
		free(temp);
		
	}

	return root;
}

Tree* Tree::getParent(Tree* root)
{
	return nullptr;
}

Tree* Tree::getLChild(Tree* node)
{
	return node->lChild;
}

Tree* Tree::getRChild(Tree* node)
{
	return node->rChild;
}

void Tree::setStr(string str)
{
	this->str = str;
}

void Tree::preOrder(Tree* tree)
{
}

void Tree::inOrder(Tree* tree)
{
}

void Tree::postOrder(Tree* tree)
{
}

void Tree::clear()
{
}

int Tree::isEmpry(Tree* tree)
{
	return 0;
}
